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
copyright = '2023-2024, Eden Rose Duff MSc'
author = 'Eden Rose Duff MSc'
release = '.'.join(_version('OZI').split('.')[:2])

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = [
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

templates_path = ['_templates']
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']

intersphinx_mapping = {
    'python': ('https://docs.python.org/3', None),
    'devguide': ('https://devguide.python.org', None),
    'pypa': ('https://packaging.python.org', None),
    'pytest': ('https://docs.pytest.org/en/stable/', None),
    'bandit': ('https://bandit.readthedocs.io/en/1.7.5/', None),
    'pytest': ('https://docs.pytest.org/en/stable/', None),
    'semantic_release': (
        'https://python-semantic-release.readthedocs.io/en/stable/',
        None,
    ),
}


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
html_context = {
    'mode': 'production',
}

# -- Options for LaTeX output ------------------------------------------------
latex_engine = 'xelatex'
latex_show_urls = 'inline'

def setup(app: sphinx.application.Sphinx) -> None:
    """Sphinx setup function"""
    app.connect('builder-inited', lambda *_: _Path('TARGET').mkdir(exist_ok=True))
    app.connect('build-finished', lambda *_: rmtree('TARGET'))
    # Our normal lockups dont really work for typesetting.
    # app.add_latex_package('atkinson')
    # app.add_latex_package('notomath')
    # app.add_latex_package('lmodern')
    # app.add_latex_package('fontenc', 'T1')
