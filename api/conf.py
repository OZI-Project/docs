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
import os

project = 'OZI'
copyright = '2023-2024, Eden Ross Duff MSc'
author = 'Eden Ross Duff MSc'
release = '.'.join(_version('OZI').split('.')[:2])

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']
extensions = [
    'invocations.autodoc',
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
    'sphinxcontrib.autoprogram',
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
today_fmt = '%d-%b-%Y'
python_display_short_literal_types = True

# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output
html_title = 'docs.OZIproject.dev'
html_favicon = 'assets/ozi_logo_72.png'
html_logo = 'assets/ozi_logo_master.png'
html_theme = 'sphinxawesome_theme'
html_context = {'mode': 'production'}
# Set canonical URL from the Read the Docs Domain
html_baseurl = os.environ.get("READTHEDOCS_CANONICAL_URL", "")

# Tell Jinja2 templates the build is running on Read the Docs
if os.environ.get("READTHEDOCS", "") == "True":
    html_context["READTHEDOCS"] = True

html_baseurl = 'https://oziproject.dev/'
html_static_path = ['_static']
html_css_files = ['css/custom.css']
html_extra_path = ['robots.txt']
html_permalinks_icon = Icons.permalinks_icon

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
\setmainfont{LatinModernRoman}[RawFeature={fallback=emoji},SmallCapsFont={* Caps}]
\setsansfont{LatinModernSans}[RawFeature={fallback=emoji}]
\setmonofont{DejaVuSansMono}[RawFeature={fallback=emoji},Scale=0.8]
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

myst_enable_extensions = ['colon_fence']

def setup(app: sphinx.application.Sphinx) -> None:
    """Sphinx setup function"""
    app.connect('builder-inited', lambda *_: _Path('TARGET').mkdir(exist_ok=True))
    app.connect('build-finished', lambda *_: rmtree('TARGET'))
