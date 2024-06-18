

=================
Quick-start Guide
=================

|begin-flushright|

.. article-info::
    :author: Eden Ross Duff MSc
    :date: 18-Sep-2023
    :read-time: 5 min read
    :class-container: sd-p-2 sd-outline-muted sd-rounded-1

|end-flushright|
|newpage|

Installation
^^^^^^^^^^^^

The OZI package is available at the :term:`Python Package Index`

.. card:: :octicon:`terminal;2em;sd-text-info`

   .. command-output:: pipx install -q OZI

.. note:: It is strongly recommended to use OZI tools through :term:`pipx` instead of installing them directly.

or at the GitHub repository for download.

.. card:: :octicon:`terminal;2em;sd-text-info`

   .. code-block:: sh

      $ git clone --depth 1 https://github.com/OZI-Project/OZI.git

Then install with:

.. card:: :octicon:`terminal;2em;sd-text-info`

   .. code-block:: sh

      $ cd OZI && python -m build -w && pip install dist/*.whl

Updating
^^^^^^^^

OZI can check whether an update is available with:

.. card:: :octicon:`terminal;2em;sd-text-info`

   .. command-output:: pipx run -q ozi -c


.. card:: :octicon:`terminal;2em;sd-text-info`

   .. code-block:: sh

      $ pipx upgrade OZI


|newpage|

Usage
^^^^^


Choose a License
****************

You should decide the license terms you want to distribute your project
with\ [*]_. A good place to start is `choosealicense.com
<https://choosealicense.com/>`_. Once you have decided on a license you
should choose a :term:`classifier` matching that license. By default ``ozi-new
project`` will warn you if you have chosen an :term:`ambiguous license`
classifier per :pep:`639` and prompt you to disambiguate with a
``--license-expression`` argument. OZI will recommend a short list of
possible :term:`SPDX short identifier` matches that you should base this
argument on. This argument must be :term:`SPDX license expression` syntax.
For example the OZI project itself uses
``--license-expression="Apache-2.0 WITH LLVM-exception"``.

.. card::

   Using the terminal emulator of your choice...
   ^^^
   .. card:: :octicon:`terminal;1.5em;sd-text-info` List the available License Classifiers with:

      .. command-output:: pipx run -q ozi --list license
         :ellipsis: 7

   .. card:: :octicon:`terminal;1.5em;sd-text-info` List the SPDX Short-IDs that a license expression is composed of with:

      .. command-output:: pipx run -q ozi --list license-id
         :ellipsis: 7

   .. card:: :octicon:`terminal;1.5em;sd-text-info` List the SPDX license exception IDs with:

      .. command-output:: pipx run -q ozi --list license-exception-id
         :ellipsis: 7

.. [*] the OZI project cannot provide legal advice and nothing in this document is
   intended to be construed as such.


Choose a Continuous Integration Provider
****************************************

Currently, the available :term:`CI` providers are:

* GitHub


Setup Python Package Index publishing
*************************************

.. grid:: 2

   .. grid-item-card::

      You should create a :term:`PyPI` account and
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

It is recommended to enable 2 Factor Authentication on both your CI
provider and PyPI account.

|newpage|

Create a New Packaged Project
*****************************

You should provide a valid email. OZI will run some basic checks of
well-formedness of the address. Deliverability checking is turned off by
default but can be turned on with the ``--verify-email`` flag. Be warned
that this is a direct DNS request and may fail or time-out for reasons
external to OZI.

.. card::

   Using the terminal emulator of your choice...
   ^^^

   .. card:: :octicon:`terminal;1.5em;sd-text-info` Create the new project.

      .. command-output:: pipx run -q ozi -new project --name=PROJECT_NAME --author=AUTHOR --author-email=PHONY@oziproject.dev --summary=SUMMARY --home-page=https://oziproject.dev --license-expression=MIT --license="OSI Approved :: MIT License" --keywords="Private,example-only" TARGET

      .. command-output:: ls TARGET

   Navigate to the TARGET directory and follow the :term:`CI`
   `Provider guide <https://docs.github.com/en/migrations/importing-source-code/using-the-command-line-to-import-source-code/adding-locally-hosted-code-to-github#initializing-a-git-repository>`_

   +++
   This will create a project with ``Development Status :: 1 - Planning``,
   ``Topic :: Utilities``, ``Typing :: Typed``, and ``Natural Language :: English``.
   You can also change these defaults by providing parameters to their respective arguments.

   .. seealso:: :ref:`ozi-new-project`

|newpage|

Find Missing Files and Metadata
*******************************

.. card:: :octicon:`terminal;1.5em;sd-text-info` Look for missing files with :abbr:`TAP (Test Anything Protocol)`:

   .. command-output:: pipx run -q ozi -fix missing TARGET

Add New Python Source Files
***************************

.. card:: :octicon:`terminal;1.5em;sd-text-info`

   The output of ozi-fix can be used with :term:`meson rewriter commands`.

   .. command-output:: pipx run -q ozi -fix source --pretty --add foo.py TARGET

   .. command-output:: meson rewrite -s ./TARGET command '[{"type": "target", "target": "source_files", "operation": "src_add", "sources": ["foo.py"], "subdir": "", "target_type": "executable"}]'
      :ellipsis: 1


|newpage|

Add New Source Subdirectories
*****************************
.. card:: :octicon:`terminal;1.5em;sd-text-info`

   The output of ozi-fix can be used with :term:`meson rewriter commands`.

   .. command-output:: pipx run -q ozi -fix source --pretty --add bar/ TARGET

   .. command-output:: meson rewrite -s ./TARGET command '[{"type": "target", "target": "source_children", "operation": "src_add", "sources": ["bar"], "subdir": "", "target_type": "executable"}]'
      :ellipsis: 1

.. _initializing-a-git-repository:
