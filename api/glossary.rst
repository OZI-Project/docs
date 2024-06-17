.. include:: latex-tools.rst
.. _glossary:

Glossary of Terms
=================

.. glossary::

   ambiguous license
      A :term:`PyPI` trove license classifier that OZI cannot match to one
      license template unless given additional information in the form of
      an :term:`SPDX license expression`.

      .. seealso::

         :pep:`Improving License Clarity with Better Package Metadata <639>`

         `Request: more precise license classifiers <https://github.com/pypa/trove-classifiers/issues/17>`_

   Angular commit style
      A simple commit convention.

      .. seealso::

         `Commit Message Format <https://github.com/angular/angular.js/blob/master/DEVELOPERS.md#commit-message-format>`_

   build
   build frontend
      The Python module that serves as the simple standardized frontend for a :term:`build backend`.

      .. seealso::

         `build <https://pypi.org/project/build/>`_

   build backend
      A library that interacts with standardized Python packaging tools
      like :term:`build`, :term:`twine`, and :term:`pip`, to assemble,
      publish, and download Python package distributions.

      .. seealso::

         :pep:`Build backend interface <517#build-backend-interface>`

   checkpoint step
      The OZI standardized :term:`CI` process that runs :term:`utility applications`.

   CD
   continuous deployment
      The process of building, certifying, and publishing an up-to-date software distribution.

   CI
   continuous integration
      The process of building, testing, and integrating code changes.
      When a developer commits code to a shared repository,
      the CI system automatically builds the project, runs tests, and checks for any errors or failures.

   classifier
   classifiers
      The individual :term:`metadata` header fields used to publically announce properties of a Python package
      being distributed on :term:`PyPI`.

      .. seealso::

         :pep:`Package Index and Metadata for Distutils <301>`

         `PyPI classifiers <https://pypi.python.org/pypi?%3Aaction=list_classifiers>`_

   draft step
      The beginning of the :term:`CD` process for OZI after a successful :term:`checkpoint step`.

   entry points
   entry points: console_scripts
   entry points: gui_scripts
      Entry points are a way for installed Python packages to expose a user interface for
      applications. One example is ``console_scripts`` entry points,
      which define shell commands with access to standard input, output, and error streams
      by identifying a Python function to run.

      .. seealso::

         :ref:`setuptools:entry_points`

   extra PKG-INFO
      Additional :term:`metadata` keys used by OZI but not supported by :term:`PyPI`.
      These are placed in the :file:`README` of a project.
      These metadata are commented out in Markdown and reStructuredText but
      not plaintext.

   meson
   mesonbuild
   meson build system
      An open-source, Python-native, fast, and friendly build system for software.

      .. seealso::

         `The Meson Build system <https://mesonbuild.com/index.html>`_

   meson build definition
      The build script, used by meson to build a software project,
      defined in a project's :file:`meson.build` file.

   meson options
      Confguration options set using the meson commandline argument :samp:`-D{option}={value}`
      and defined in a project's :file:`meson.options` file.

      .. seealso::

         `Meson - Manual - Build options <https://mesonbuild.com/Build-options.html>`_

   meson rewriter commands
   meson rewriter script mode
      The stable JSON interface to the ``meson rewrite`` tool used for rewriting targets
      and kwargs in a :term:`meson build definition`.

      .. seealso::

         `Introducing JSON <https://www.json.org>`_

         `Meson - Rewriter - Using the "script mode" <https://mesonbuild.com/Rewriter.html#using-the-script-mode>`_

   metadata
      Information needed by a build backend to build the
      :file:`PKG-INFO`/:file:`METADATA` in a Python software package.

      .. seealso::

         :std:ref:`pypa:core-metadata`

   pip
      The standard tool to install third-party Python packages from a package index like :term:`PyPI`.

      .. seealso::

         :std:doc:`pip:user_guide`

   pipx
      Similar to :term:`pip` but isolates packages with :term:`entry points`
      into their own :term:`virtual environment`.

      .. seealso::

         `How pipx works <https://pipx.pypa.io/stable/how-pipx-works/>`_

   pip-compile
      A tool for compiling an up-to-date compatible :file:`requirements.txt`
      from more loosely defined :term:`requirements` in :file:`requirements.in`
      and optional constraints.

      .. seealso::

         :std:doc:`pip-tools:cli/pip-compile`

   publish step
      The next step in the :term:`CD` process after the :term:`release step`,
      publishes distribution packages.

   pyproject.toml

      A standardized way to instruct tools like :term:`pip` how to build
      a Python package. This file is found at the top-level of a Python
      package directory.

      .. seealso::

         :std:doc:`pip:reference/build-system/pyproject-toml`

   Python bytecode
      The compiled minor-version specific binary of a python source file.
      These use the file extension ``*.pyc``.

   PyPI
   Python Package Index
      The official online repository for Python software packages.

      .. seealso::
         `The Python Package Index <https://pypi.org>`_

   release step
      The next step in the :term:`CD` process after the :term:`draft step`,
      creates release distribution packages.

   requirements
      The dependencies of a Python software distribution.
      OZI uses :term:`pip-compile` to configure valid dependency versions based on
      a :file:`requirements.in` file during the ``meson setup`` phase. OZI also
      does this for its standard :term:`checkpoint step` :term:`utility applications`.

      .. seealso::

         :std:ref:`pip:0-requirements-file-format`

   SBOM
   Software Bill of Materials
      A record of the components and processes used in a software distribution's supply chain.

   sdist
   source distribution
      A Python package distribution's source format, a zipped tarball with :term:`metadata`.

   setuptools
      The stable Python packaging library.

      .. seealso::

         :std:ref:`setuptools:api-reference`

   setuptools_scm
      Uses repository version control system to generate version info at build time.

      .. seealso::

         `Usage <https://setuptools-scm.readthedocs.io/en/latest/usage/>`_

   stubs
   stubfiles
      Python typing information as a separate file with the extension ``*.pyi``.

   SPDX
   System Package Data Exchange
      An open standard for :term:`SBOM` interoperability.

   SPDX license exception
      A standard component, :token:`license-exception-id`, of a :term:`SPDX license expression` communicating exceptions applicable to a license.

      .. seealso::

         `License Exceptions <https://spdx.org/licenses/exceptions-index.html>`_

   SPDX license expression
      A standardized way of communicating software licensing information as :token:`license-expression`, part of :term:`SPDX`.

      |begin-samepage|

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

      |end-samepage|

      .. seealso::

         `Annex D: License Expressions <https://spdx.github.io/spdx-spec/v3.0/annexes/SPDX-license-expressions/>`_

   SPDX short identifier
      A standard component, :token:`license-id`, of a :term:`SPDX license expression` communicating a license in shortened form.

      .. seealso::

         `Annex E: Using SPDX license list short identifiers in source files (Informative) <https://spdx.github.io/spdx-spec/v2.3/using-SPDX-short-identifiers-in-source-files/>`_

   TAP
   Test Anything Protocol
      A text-based interface for communicating test results.
      Used by :program:`ozi`, :program:`ozi-new`, and :program:`ozi-fix`
      for outputs where stdout is not intended for another use.

      .. seealso::

         `TAP Specification <https://testanything.org/tap-specification.html>`_

   tox
      A mature, Python-native, solution for automated :term:`virtual environment` provisioning.

      .. seealso::

         :std:doc:`tox:index`

   twine
      The standard tool to check and upload a release distribution securely to the :term:`Python Package Index`.

      .. seealso::

         `twine <https://pypi.org/project/twine/>`_

   utility
   utility applications
   utility application
   utility program
      Program(s) or Python module(s) with an interface suitable for ``meson test``.
      For OZI this means that a program has its :term:`requirements` and external dependencies
      configured and is subsequently installed to the :term:`tox` environment during the
      ``meson setup`` stage.

      .. seealso::

         `Meson - Reference Manual - Functions - test <https://mesonbuild.com/Reference-manual_functions.html#test>`_

   virtual environment
      An isolated and disposable filesystem containing a Python installation
      and packages.

      .. seealso::

         :std:doc:`python:library/venv`

   wheel
      The standard format for distributing a binary Python package.

      .. seealso::

         :std:doc:`pypa:specifications/binary-distribution-format`
