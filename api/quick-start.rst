=================
Quick-start Guide
=================

Installation
^^^^^^^^^^^^

.. card:: :octicon:`terminal;2em;sd-text-info`

   .. code-block:: sh

      pip install OZI

Usage
^^^^^

Choose a Continuous Integration Provider
****************************************

Currently the available :abbr:`CI (Continuous Integration)` Providers are:

* GitHub

Setup Python Package Index publishing
*************************************

.. grid:: 2

   .. grid-item-card::

      You should create a PyPI account and
      `add a new pending publisher <https://pypi.org/manage/account/publishing/>`_ using:

      * PyPI Project Name: :abbr:`PROJECT_NAME (unique name for your project on PyPI)` [#f1]_
      * Owner: :abbr:`GH_USER (your username or organization)`
      * Repository name: :abbr:`GH_PROJECT_NAME (unique name for your repository)` [#f1]_
      * Workflow name: ozi.yml
      * Environment name: publish

      .. rubric:: Footnotes

      .. [#f1] OZI recommends using the same PROJECT_NAME and GH_PROJECT_NAME


   .. grid-item-card::

      Figure 1: PyPI New pending publishing form.
      ^^^
      .. figure:: assets/Fig1_PyPI_New_pending_publisher.png
         :alt: Screenshot of PyPI New pending publishing form.
      +++
      Screenshot taken: 17-Sep-2023

It is recommended to enable 2 Factor Authentication on both your CI provider and PyPI 
account.

New Project
***********

You should decide the license terms you want to distribute your project with [*]_
A good place to start is `choosealicense.com <https://choosealicense.com/>`_.
Once you have decided on a license you should choose a Classifier matching that license.
By default ``ozi-new project`` will warn you if you have chosen an ambiguous classifier
per PEP-639 and prompt you to disambiguate with a ``--license-expression`` argument.
This argument must be
`SPDX license expression syntax <https://spdx.github.io/spdx-spec/v2.2.2/SPDX-license-expressions/>`_
You should also provide a valid email. Deliverability checking is turned off by default 
but can be turned on with the ``--verify-email`` flag.

.. card:: :octicon:`terminal;2em;sd-text-info`

   Using the terminal emulator of your choice...
   ^^^

   .. code-block:: sh
      :caption: List the available License Classifiers with:

      ozi-new --list license

   .. code-block:: sh
      :caption: List the SPDX Short-ID's that a license expression is composed of with:

      ozi-new --list license-expression

   .. code-block:: sh
      :caption: Create a project in a TARGET directory(must be empty) with:

      ozi-new project \
      --name=PROJECT_NAME \
      --author=AUTHOR \
      --email=EMAIL \
      --summary=SUMMARY \
      --homepage=HOMEPAGE \
      --license-expression=SPDX-EXPR \
      --license=LICENSE \
      TARGET

   Navigate to the TARGET directory and follow the CI Provider guide: 
   initializing-a-git-repository_.

   +++
   This will create a project with ``Development Status :: 1 - Planning``,
   ``Topic :: Utilities``, ``Typing :: Typed``, and ``Natural Language :: English``.
   You can also change these defaults by providing parameters to their respective arguments.

.. [*] the OZI project cannot provide legal advice and nothing in this document is
   intended to be construed as such.

Find Missing Files
******************

.. card:: :octicon:`terminal;2em;sd-text-info`

   .. code-block:: sh

      ozi-fix -m TARGET


.. card:: :octicon:`ellipsis;2em;sd-text-info`

   .. code-block:: sh

      ok 1 - Parse PKG-INFO
      ok 2 - Metadata-Version: 2.1
      ok 3 - Name: PROJECT_NAME
      ok 4 - Version: {version}
      ok 5 - Summary: short summary
      ok 6 - Classifier: Development Status :: 1 - Planning
      ok 7 - Classifier: Intended Audience :: Other Audience
      ok 8 - Classifier: License :: LICENSE
      ok 9 - Classifier: Natural Language :: English
      ok 10 - Classifier: Programming Language :: Python :: 3
      ok 11 - Classifier: Programming Language :: Python :: 3.10
      ok 12 - Classifier: Programming Language :: Python :: 3.11
      ok 13 - Classifier: Programming Language :: Python :: 3.9
      ok 14 - Classifier: Programming Language :: Python :: Implementation :: CPython
      ok 15 - Classifier: Topic :: Utilities
      ok 16 - Classifier: Typing :: Typed
      ok 17 - Classifier: Environment :: Other Environment
      ok 18 - Project-URL: Homepage, HOMEPAGE
      ok 19 - Description-Content-Type: text/x-rst
      ok 20 - Classifier: License-Expression :: SPDX-EXPR
      ok 21 - Classifier: License-File :: LICENSE.txt
      ok 22 - README.rst
      ok 23 - .gitignore
      ok 24 - pyproject.toml
      ok 25 - meson.build
      ok 26 - meson.options
      ok 27 - LICENSE.txt
      ok 28 - PKG-INFO
      ok 29 - PROJECT_NAME/meson.build
      ok 30 - PROJECT_NAME/__init__.py
      ok 31 - PROJECT_NAME/py.typed
      ok 32 - tests/meson.build
      1..32

Create New Sources
^^^^^^^^^^^^^^^^^^

.. card:: :octicon:`terminal;2em;sd-text-info`

   .. code-block:: sh

      ozi-new source NAME.py --author=AUTHOR

Add Created Sources
^^^^^^^^^^^^^^^^^^^

.. card:: :octicon:`terminal;2em;sd-text-info`

   .. code-block:: sh

      ozi-fix --add PROJECT_NAME/NAME.py . | meson rewrite command


.. _initializing-a-git-repository: https://docs.github.com/en/migrations/importing-source-code/using-the-command-line-to-import-source-code/adding-locally-hosted-code-to-github#initializing-a-git-repository