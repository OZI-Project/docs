# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information
from importlib.metadata import version as _version
from pathlib import Path as _Path
from shutil import rmtree
import sphinx.application
from sphinxawesome_theme.postprocess import Icons
import sys
from os.path import basename

try:
    from StringIO import StringIO # type: ignore
except ImportError:
    from io import StringIO

from docutils.parsers.rst import Directive
from docutils import nodes, statemachine

# from sphinxawesome_theme.docsearch import DocSearchConfig

# This gets you code completion and documentation for your configuration options
# docsearch_app_id = os.getenv('DOCSEARCH_APP_ID', '')
# docsearch_api_key = os.getenv('DOCSEARCH_API_KEY', '')
# docsearch_index_name = os.getenv('DOCSEARCH_INDEX_NAME', '')
# config = DocSearchConfig(
#     docsearch_app_id=docsearch_app_id,
#     docsearch_api_key=docsearch_api_key,
#     docsearch_index_name=docsearch_index_name,
# )

project = 'OZI'
copyright = '2023-2024, Eden Ross Duff MSc'
author = 'Eden Ross Duff MSc'
release = '.'.join(_version('OZI').split('.')[:2])

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']
extensions = [
    'myst_parser',
    'sphinx.ext.autodoc',
    'sphinx.ext.coverage',
    'sphinx.ext.duration',
    'sphinx.ext.extlinks',
    'sphinx.ext.githubpages',
    'sphinx.ext.ifconfig',
    'sphinx.ext.intersphinx',
    'sphinx.ext.napoleon',
    'sphinx.ext.todo',
    'sphinx.ext.viewcode',
    'sphinxemoji.sphinxemoji',
    'sphinx_design',
    'sphinx_last_updated_by_git',
    'sphinx_sitemap',
    'sphinxawesome_theme.highlighting',
    'sphinxcontrib.programoutput',
    'sphinxcontrib.cairosvgconverter',
]
rst_prolog = '.. include:: latex-tools.rst'
rst_epilog = """
.. only:: html

   .. raw:: html

      <script src="https://giscus.app/client.js"
              data-repo="OZI-Project/.github"
              data-repo-id="R_kgDOLAb2hQ"
              data-category="Announcements"
              data-category-id="DIC_kwDOLAb2hc4Cca6C"
              data-mapping="og:title"
              data-strict="0"
              data-reactions-enabled="1"
              data-emit-metadata="0"
              data-input-position="bottom"
              data-theme="https://www.oziproject.dev/assets/css/giscus-docs.css"
              data-lang="en"
              crossorigin="anonymous"
              async>
       </script>

"""
templates_path = ['_templates']
python_display_short_literal_types = True

# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output
html_title = 'docs.OZIproject.dev'
html_favicon = 'assets/ozi_logo_72.png'
html_logo = 'assets/ozi_logo_master.png'
html_theme = 'sphinxawesome_theme'
html_baseurl = 'https://oziproject.dev/'
html_static_path = ['_static']
html_css_files = ['css/custom.css']
html_extra_path = ['robots.txt']
html_permalinks_icon = Icons.permalinks_icon
html_context = {'mode': 'production'}

# -- Options for LaTeX output ------------------------------------------------
latex_logo = 'assets/brand/images/ozi_social_preview.png'
latex_engine = 'lualatex'
latex_elements = {
    'preamble': r'''\directlua {
  luaotfload.add_fallback("emoji",
  {
     "[TwemojiMozilla.ttf]:mode=harf;",
     "[DejaVuSans.ttf]:mode=harf;",
  } 
  )
}
''',
    'fncychap': r'\usepackage[Sonny]{fncychap}'
}
latex_show_pagerefs = True
latex_show_urls = 'inline'
latex_appendices = ['appendix-a']

# -- sphinx.ext.autodoc ------------------------------------------------------
autodoc_preserve_defaults = True
autodoc_typehints_format = 'short'

# -- sphinx.ext.coverage -----------------------------------------------------
coverage_show_missing_items = True

# -- sphinx.ext.intersphinx --------------------------------------------------
intersphinx_mapping = {
    'devguide': ('https://devguide.python.org', None),
    'pip': ('https://pip.pypa.io/en/latest', None),
    'pipx': ('https://pipx.pypa.io/stable/', None),
    'pip-tools': ('https://pip-tools.readthedocs.io/en/stable/', None),
    'pypa': ('https://packaging.python.org', None),
    'python': ('https://docs.python.org/3.10/', None),
    'pytest': ('https://docs.pytest.org/en/stable/', None),
    'bandit': ('https://bandit.readthedocs.io/en/1.7.5/', None),
    'jinja2': ('https://jinja.palletsprojects.com/en/3.1.x/', None),
    'semantic_release': (
        'https://python-semantic-release.readthedocs.io/en/stable/',
        None,
    ),
    'setuptools': ('https://setuptools.pypa.io/en/stable/', None),
    'tox': ('https://tox.wiki/en/stable/', None)
}


class ExecDirective(Directive):
    """Execute the specified python code and insert the output into the document"""

    has_content = True

    def run(self):
        oldStdout, sys.stdout = sys.stdout, StringIO()

        tab_width = self.options.get(
            'tab-width', self.state.document.settings.tab_width
        )
        source = self.state_machine.input_lines.source(
            self.lineno - self.state_machine.input_offset - 1
        )
        try:
            exec('\n'.join(self.content))
            text = sys.stdout.getvalue().replace('[', '<').replace("]", ">")
            lines = statemachine.string2lines(text, tab_width, convert_whitespace=True)
            self.state_machine.insert_input(lines, source)
            return []
        except Exception:
            return [
                nodes.error(
                    None,
                    nodes.paragraph(
                        text=f'Unable to execute python code at {basename(source)}:{self.lineno}:'
                    ),
                    nodes.paragraph(text=str(sys.exc_info()[1])),
                )
            ]
        finally:
            sys.stdout = oldStdout


def setup(app: sphinx.application.Sphinx) -> None:
    """Sphinx setup function"""
    app.connect('builder-inited', lambda *_: _Path('TARGET').mkdir(exist_ok=True))
    app.connect('build-finished', lambda *_: rmtree('TARGET'))
    app.add_directive('exec', ExecDirective)
