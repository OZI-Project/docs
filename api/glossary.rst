.. include:: latex-tools.rst
.. _glossary:

Glossary of Terms
=================

.. glossary::

   ambiguous license
      |begin-samepage|
      A :term:`PyPI` trove license classifier that OZI cannot match to one
      license template unless given additional information in the form of
      an :term:`SPDX license expression`.

      |nopagebreak|

      .. seealso::

         :pep:`Improving License Clarity with Better Package Metadata <639>`

         `Request: more precise license classifiers <https://github.com/pypa/trove-classifiers/issues/17>`_

      |end-samepage|

   Angular commit style
      |begin-samepage|
      A simple commit convention.

      |nopagebreak|

      .. seealso::

         `Commit Message Format <https://github.com/angular/angular.js/blob/master/DEVELOPERS.md#commit-message-format>`_

      |end-samepage|

   build
   build frontend
      |begin-samepage|
      The Python module that serves as the simple standardized frontend for a :term:`build backend`.

      |nopagebreak|

      .. seealso::

         `build <https://pypi.org/project/build/>`_

      |end-samepage|

   build backend
      |begin-samepage|
      A library that interacts with standardized Python packaging tools
      like :term:`build`, :term:`twine`, and :term:`pip`, to assemble,
      publish, and download Python package distributions.

      |nopagebreak|

      .. seealso::

         :pep:`Build backend interface <517#build-backend-interface>`

      |end-samepage|

   checkpoint step
      |begin-samepage|
      The OZI standardized :term:`CI` process that runs :term:`utility applications`.

      |nopagebreak|

      |end-samepage|

   CD
   continuous deployment
      |begin-samepage|
      The process of building, certifying, and publishing an up-to-date software distribution.

      |nopagebreak|

      |end-samepage|

   CI
   continuous integration
      |begin-samepage|
      The process of building, testing, and integrating code changes.
      When a developer commits code to a shared repository,
      the CI system automatically builds the project, runs tests, and checks for any errors or failures.

      |nopagebreak|

      |end-samepage|

   classifier
   classifiers
      |begin-samepage|
      The individual :term:`metadata` header fields used to publically announce properties of a Python package
      being distributed on :term:`PyPI`.

      |nopagebreak|

      .. seealso::

         :pep:`Package Index and Metadata for Distutils <301>`

         `PyPI classifiers <https://pypi.python.org/pypi?%3Aaction=list_classifiers>`_

      |end-samepage|

   draft step
      |begin-samepage|
      The beginning of the :term:`CD` process for OZI after a successful :term:`checkpoint step`.

      |nopagebreak|

   entry points
   entry points: console_scripts
   entry points: gui_scripts
      |begin-samepage|
      Entry points are a way for installed Python packages to expose a user interface for
      applications. One example is ``console_scripts`` entry points,
      which define shell commands with access to standard input, output, and error streams
      by identifying a Python function to run.

      |nopagebreak|

      .. seealso::

         :ref:`setuptools:entry_points`

      |end-samepage|

   extra PKG-INFO
      |begin-samepage|
      Additional :term:`metadata` keys used by OZI but not supported by :term:`PyPI`.
      These are placed in the :file:`README` of a project.
      These metadata are commented out in Markdown and reStructuredText but
      not plaintext.

      |nopagebreak|

      |end-samepage|

   meson
   mesonbuild
   meson build system
      |begin-samepage|
      An open-source, Python-native, fast, and friendly build system for software.

      |nopagebreak|

      .. seealso::

         `The Meson Build system <https://mesonbuild.com/index.html>`_

      |end-samepage|

   meson build definition
      |begin-samepage|
      The build script, used by meson to build a software project,
      defined in a project's :file:`meson.build` file.

      |nopagebreak|

      |end-samepage|

   meson options
      |begin-samepage|
      Confguration options set using the meson commandline argument :samp:`-D{option}={value}`
      and defined in a project's :file:`meson.options` file.

      |nopagebreak|

      .. seealso::

         `Meson - Manual - Build options <https://mesonbuild.com/Build-options.html>`_

      |end-samepage|

   meson rewriter commands
   meson rewriter script mode
      |begin-samepage|
      The stable JSON interface to the ``meson rewrite`` tool used for rewriting targets
      and kwargs in a :term:`meson build definition`.

      |nopagebreak|

      .. seealso::

         `Introducing JSON <https://www.json.org>`_

         `Meson - Rewriter - Using the "script mode" <https://mesonbuild.com/Rewriter.html#using-the-script-mode>`_

      |end-samepage|

   metadata
      |begin-samepage|
      Information needed by a build backend to build the
      :file:`PKG-INFO`/:file:`METADATA` in a Python software package.

      |nopagebreak|

      .. seealso::

         :std:ref:`pypa:core-metadata`

      |end-samepage|

   pip
      |begin-samepage|
      The standard tool to install third-party Python packages from a package index like :term:`PyPI`.

      |nopagebreak|

      .. seealso::

         :std:doc:`pip:user_guide`

      |end-samepage|

   pipx
      |begin-samepage|
      Similar to :term:`pip` but isolates packages with :term:`entry points`
      into their own :term:`virtual environment`.

      |nopagebreak|

      .. seealso::

         `How pipx works <https://pipx.pypa.io/stable/how-pipx-works/>`_

   pip-compile
      |begin-samepage|
      A tool for compiling an up-to-date compatible :file:`requirements.txt`
      from more loosely defined :term:`requirements` in :file:`requirements.in`
      and optional constraints.

      |nopagebreak|

      .. seealso::

         :std:doc:`pip-tools:cli/pip-compile`

      |end-samepage|

   publish step
      |begin-samepage|
      The next step in the :term:`CD` process after the :term:`release step`,
      publishes distribution packages.

      |nopagebreak|

   pyproject.toml
      |begin-samepage|
      A standardized way to instruct tools like :term:`pip` how to build
      a Python package. This file is found at the top-level of a Python
      package directory.

      |nopagebreak|

      .. seealso::

         :std:doc:`pip:reference/build-system/pyproject-toml`

      |end-samepage|

   Python bytecode
      |begin-samepage|
      The compiled minor-version specific binary of a python source file.
      These use the file extension ``*.pyc``.

      |nopagebreak|

      |end-samepage|

   PyPI
   Python Package Index
      |begin-samepage|
      The official online repository for Python software packages.

      |nopagebreak|

      .. seealso::
         `The Python Package Index <https://pypi.org>`_

      |end-samepage|

   release step
      |begin-samepage|
      The next step in the :term:`CD` process after the :term:`draft step`,
      creates release distribution packages.

      |nopagebreak|

      |end-samepage|

   requirements
      |begin-samepage|
      The dependencies of a Python software distribution.
      OZI uses :term:`pip-compile` to configure valid dependency versions based on
      a :file:`requirements.in` file during the ``meson setup`` phase. OZI also
      does this for its standard :term:`checkpoint step` :term:`utility applications`.

      |nopagebreak|

      .. seealso::

         :std:ref:`pip:0-requirements-file-format`

      |end-samepage|

   SBOM
   Software Bill of Materials
      |begin-samepage|
      A record of the components and processes used in a software distribution's supply chain.

      |nopagebreak|

      |end-samepage|

   sdist
   source distribution
      |begin-samepage|
      A Python package distribution's source format, a zipped tarball with :term:`metadata`.

      |nopagebreak|

      |end-samepage|

   setuptools
      |begin-samepage|
      The stable Python packaging library.

      |nopagebreak|

      .. seealso::

         :std:ref:`setuptools:api-reference`

      |end-samepage|

   setuptools_scm
      |begin-samepage|
      Uses repository version control system to generate version info at build time.

      |nopagebreak|

      .. seealso::

         `Usage <https://setuptools-scm.readthedocs.io/en/latest/usage/>`_

      |end-samepage|

   stubs
   stubfiles
      |begin-samepage|
      Python typing information as a separate file with the extension ``*.pyi``.

      |nopagebreak|

      |end-samepage|

   SPDX
   System Package Data Exchange
      |begin-samepage|
      An open standard for :term:`SBOM` interoperability.

      |nopagebreak|

      |end-samepage|

   SPDX license exception
      |begin-samepage|
      A standard component, :token:`license-exception-id`, of a :term:`SPDX license expression` communicating exceptions applicable to a license.

      |nopagebreak|

      .. seealso::

         `License Exceptions <https://spdx.org/licenses/exceptions-index.html>`_

   SPDX license expression
      |begin-samepage|
      A standardized way of communicating software licensing information as :token:`license-expression`, part of :term:`SPDX`.

      |nopagebreak|

      .. productionlist::
         idstring: (ALPHA | DIGIT | "-" | ".")
         license-id: `SPDX short identifier`
         license-exception-id: `SPDX license exception`
         license-ref: ["DocumentRef-"(idstring)":"]"LicenseRef-"(idstring)
         addition-ref: ["DocumentRef-"(idstring)":"]"AdditionRef-"(idstring)
         simple-expression: license-id | license-id"+" | license-ref
         addition-expression: license-exception-id | addition-ref
         paren-expression: compound-expression | "(" compound-expression ")"
         or-stmt: compound-expression ("OR" | "or") paren-expression
         and-stmt: compound-expression ("AND" | "and") or-expression
         or-expression: compound-expression | or-stmt
         and-expression: addition-expression | and-stmt
         with-expression: simple-expression ("WITH" | "with") and-expression
         compound-expression: simple-expression | with-expression
         license-expression: simple-expression | compound-expression

      |nopagebreak|

      .. seealso::

         `Annex D: License Expressions <https://spdx.github.io/spdx-spec/v3.0/annexes/SPDX-license-expressions/>`_

      |end-samepage|

   SPDX short identifier
      |begin-samepage|
      A standard component, :token:`license-id`, of a :term:`SPDX license expression` communicating a license in shortened form.

      |nopagebreak|

      .. seealso::

         `Annex E: Using SPDX license list short identifiers in source files (Informative) <https://spdx.github.io/spdx-spec/v2.3/using-SPDX-short-identifiers-in-source-files/>`_

      |end-samepage|

   TAP
   Test Anything Protocol
      |begin-samepage|
      A text-based interface for communicating test results.
      Used by :program:`ozi`, :program:`ozi-new`, and :program:`ozi-fix`
      for outputs where stdout is not intended for another use.

      |nopagebreak|

      .. seealso::

         `TAP Specification <https://testanything.org/tap-specification.html>`_

      |end-samepage|

   tox
      |begin-samepage|
      A mature, Python-native, solution for automated :term:`virtual environment` provisioning.

      |nopagebreak|

      .. seealso::

         :std:doc:`tox:index`

      |end-samepage|

   twine
      |begin-samepage|
      The standard tool to check and upload a release distribution securely to the :term:`Python Package Index`.

      |nopagebreak|

      .. seealso::

         `twine <https://pypi.org/project/twine/>`_

      |end-samepage|

   utility
   utility applications
   utility application
   utility program
      |begin-samepage|
      Program(s) or Python module(s) with an interface suitable for ``meson test``.
      For OZI this means that a program has its :term:`requirements` and external dependencies
      configured and is subsequently installed to the :term:`tox` environment during the
      ``meson setup`` stage.

      |nopagebreak|

      .. seealso::

         `Meson - Reference Manual - Functions - test <https://mesonbuild.com/Reference-manual_functions.html#test>`_

      |end-samepage|

   virtual environment
      |begin-samepage|
      An isolated and disposable filesystem containing a Python installation
      and packages.

      |nopagebreak|

      .. seealso::

         :std:doc:`python:library/venv`

      |end-samepage|

   wheel
      |begin-samepage|
      The standard format for distributing a binary Python package.

      |nopagebreak|

      .. seealso::

         :std:doc:`pypa:specifications/binary-distribution-format`
