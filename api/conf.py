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
    'sphinx_design',
    'sphinx_last_updated_by_git',
    'sphinx_sitemap',
    'sphinxawesome_theme.highlighting',
    'sphinxcontrib.programoutput',
]
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

# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output
html_title = 'docs.OZIproject.dev'
html_favicon = 'assets/ozi_logo_docs_144.png'
html_logo = 'assets/ozi_logo_docs_144.png'
html_theme = 'sphinxawesome_theme'
html_baseurl = 'https://oziproject.dev/'
html_static_path = ['_static']
html_css_files = ['css/custom.css']
html_extra_path = ['robots.txt']
html_permalinks_icon = Icons.permalinks_icon
html_context = {'mode': 'production'}

# -- Options for LaTeX output ------------------------------------------------
latex_logo = 'assets/brand/images/ozi_social_preview.png'
latex_elements = {'fncychap': r'\usepackage[Sonny]{fncychap}'}
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
    'pypa': ('https://packaging.python.org', None),
    'pytest': ('https://docs.pytest.org/en/stable/', None),
    'bandit': ('https://bandit.readthedocs.io/en/1.7.5/', None),
    'semantic_release': (
        'https://python-semantic-release.readthedocs.io/en/stable/',
        None,
    ),
}


def setup(app: sphinx.application.Sphinx) -> None:
    """Sphinx setup function"""
    app.connect('builder-inited', lambda *_: _Path('TARGET').mkdir(exist_ok=True))
    app.connect('build-finished', lambda *_: rmtree('TARGET'))
