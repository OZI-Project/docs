# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information
from importlib.metadata import version as _version

project = 'OZI'
copyright = '2023, Ross J. Duff MSc'
author = 'Ross J. Duff MSc'
release = '.'.join(_version('OZI').split('.')[:2])

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = [
    'sphinx.ext.intersphinx',
    'sphinx.ext.duration',
    'sphinx.ext.extlinks',
    'sphinx.ext.githubpages',
    'sphinx.ext.ifconfig',
    'sphinx.ext.napoleon',
    'sphinx.ext.todo',
    'sphinx.ext.viewcode',
    'sphinxawesome_theme.highlighting',
]

templates_path = ['_templates']
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']

intersphinx_mapping = {'python': ('https://docs.python.org/3', None),
                       'devguide': ('https://devguide.python.org', None),
                       'pypa': ('https://packaging.python.org', None),
                       'bandit': ('https://bandit.readthedocs.io/en/1.7.5/', None),}


# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output

html_logo = 'assets/ozi_logo_200dpi.png'
html_theme = 'sphinxawesome_theme'
html_static_path = ['_static']

def setup(app):
    app.add_css_file("css/custom.css")
