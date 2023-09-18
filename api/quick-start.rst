=================
Quick-start Guide
=================

.. article-info::
    :author: Ross J. Duff MSc
    :date: 17-Sep-2023
    :read-time: 5 min read
    :class-container: sd-p-2 sd-outline-muted sd-rounded-1

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

.. card::

   Using the terminal emulator of your choice...
   ^^^
   .. card:: :octicon:`terminal;1em;sd-text-info` List the available License Classifiers with:

      .. command-output:: ozi-new --list license
         :ellipsis: 10

   .. card:: :octicon:`terminal;1em;sd-text-info` List the SPDX Short-ID's that a license expression is composed of with:

      .. command-output:: ozi-new --list license-expression
         :ellipsis: 10

   .. card:: :octicon:`terminal;1em;sd-text-info` Create the new project.

      .. command-output:: ozi-new project --name=PROJECT_NAME --author=AUTHOR --email=EMAIL --summary=SUMMARY --homepage=HOMEPAGE --license-expression=MIT --license="OSI Approved :: MIT License" TARGET

   .. card:: Navigate to the TARGET directory and follow the CI Provider guide 
      :link: https://docs.github.com/en/migrations/importing-source-code/using-the-command-line-to-import-source-code/adding-locally-hosted-code-to-github#initializing-a-git-repository

   +++
   This will create a project with ``Development Status :: 1 - Planning``,
   ``Topic :: Utilities``, ``Typing :: Typed``, and ``Natural Language :: English``.
   You can also change these defaults by providing parameters to their respective arguments.

.. [*] the OZI project cannot provide legal advice and nothing in this document is
   intended to be construed as such.

Find Missing Files and Metadata
*******************************

.. card:: :octicon:`terminal;1em;sd-text-info` Look for missing files with :abbr:`TAP (Test Anything Protocol)`:

   .. command-output:: ozi-fix -m TARGET


Create New Sources
^^^^^^^^^^^^^^^^^^

.. card:: :octicon:`terminal;1em;sd-text-info` Create new Python source files with:

   .. command-output:: ozi-new source --author=AUTHOR TARGET NAME.py

Add Created Sources
^^^^^^^^^^^^^^^^^^^

.. card:: :octicon:`terminal;1em;sd-text-info`

   .. code-block:: sh

      ozi-fix --add PROJECT_NAME/NAME.py . | meson rewrite command


.. _initializing-a-git-repository: 