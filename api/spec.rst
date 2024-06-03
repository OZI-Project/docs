.. Copyright 2023 Ross J. Duff MSc
   The copyright holder licenses this file
   to you under the Apache License, Version 2.0 (the
   "License"); you may not use this file except in compliance
   with the License.  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

   Unless :strong:`REQUIRED` by applicable law or agreed to in writing,
   software distributed under the License is distributed on an
   "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
   KIND, either express or implied.  See the License for the
   specific language governing permissions and limitations
   under the License.

.. include:: latex-tools.rst

.. meta::
   :description: specification for the OZI Python packaging for Meson API.
   :keywords: specification, OZI, Python, API, packaging, Meson

=================
API Specification
=================

|begin-flushright|

.. article-info::
   :author: Eden Ross Duff MSc
   :date: 18-Sep-2023
   :read-time: 45 min read
   :class-container: sd-p-2 sd-outline-muted sd-rounded-1

|end-flushright|
|newpage|

This document contains the specification for the OZI Python packaging
for Meson API. OZI is meant for Python developers as a standardized
and flexible but opinionated Python packaging style guide and checkpointing
API using the Meson build system.

The API specification not meant to be used by Python developers seeking
OZI for the purposes stated above. This document is primarily intended as:

#. An OZI maintainers guide to compliance with the OZI specification.
#. A place to document major and minor changes to the OZI specification.

This is a work in progress as a part of continued Alpha development.


.. index::
   triple: specification; normative; references

Normative References
--------------------

This document also contains normative references to
:abbr:`RFC (Request for Comments)`,
:abbr:`PEP (Python Enhancement Proposal)` standards,
gitmoji specification,
:abbr:`ISO (International Organization for Standardization)`/
:abbr:`IEC (International Electrotechnical Commission)` standards,
:abbr:`PyPA (Python Packaging Authority)` specifications,
:abbr:`TAP (Test Anything Protocol)` specification, and
:abbr:`TOML (Tom's Obvious, Minimal Language)` specification.

The key words "MUST", "MUST NOT", "REQUIRED", "SHALL", "SHALL NOT",
"SHOULD", "SHOULD NOT", "RECOMMENDED", "MAY", and "OPTIONAL"
in this document are to be interpreted as described in :rfc:`2119`.

.. seealso::

   .. card::
      :class-card: seealso

      * `gitmoji <https://gitmoji.dev/specification>`_
      * :pep:`Python Enhancement Proposal Index <0>`
      * :std:doc:`pypa:specifications/index`
      * `Request for Comments <https://www.rfc-editor.org/rfc-index-100a.html>`_
      * `Test Anything Protocol <https://testanything.org/tap-specification.html>`_
      * `Tom's Obvious Minimal Language <https://toml.io/en/v1.0.0>`_

|newpage|

Source
------

The following contains the specification for the source code structure and
format of an OZI project.

.. index:: triple: specification; source; format

Format
^^^^^^

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. grid:: 2

      .. grid-item-card:: :octicon:`tab;1em;sd-text-info` Respect maximum line width limit 93.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` Disallow commented-out code.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` Disallow leading blank lines.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` Disallow ``\`` line-breaks.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` Disallow datetime use without timezone info.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` Disallow ``FIXME``, ``TODO``, and ``XXX`` in release.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` Disallow generator expressions for builtin types.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` Disallow :py:func:`map` calls with lambda parameters.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`typography;1em;sd-text-info` Use ``"""`` for docstrings and multi-line string quotes.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`typography;1em;sd-text-info` Use ``'`` for string quotes.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`shield;1em;sd-text-info` Guard type-checking imports.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` Disallow unnecessary import aliases.

         .. versionadded:: 0.1

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` Disallow relative imports from parent modules.

         .. versionadded:: 0.1

|bigskip|

.. card:: :octicon:`info;1.5em;sd-text-warning` :emphasis:`RECOMMENDED`

   |linebreak|

   .. card:: :octicon:`rows;1em;sd-text-warning` Prefer LF over CRLF line-endings.

      .. versionadded:: 0.1

   .. index::
      triple: specification; python; support
      triple: python; support; unicodedata
      pair: unicodedata; unidata_version

   .. card:: Normalize unicodedata.unidata_version between minor Python releases.

      .. versionadded:: 0.1

      Use the latest ISO/IEC 10646, 2021 being the most recent and aligned to version 14.0.0
      of unidata.

Python Implementation
^^^^^^^^^^^^^^^^^^^^^

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. card:: CPython
      :link: https://www.python.org

      .. versionadded:: 0.1


Structure
^^^^^^^^^

The following is the minimal project structure :strong:`REQUIRED` by
``ozi`` to be a project.

|bigskip|

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. dropdown:: :abbr:`project_name/ (meson.build variable project_name)`
      :icon: file-directory

      .. versionadded:: 0.1

      Python sources, submodules, and stubfiles.

      .. dropdown:: :file:`project_name/__init__.py`

         .. versionadded:: 0.1

         Python package module entry point.

         .. only:: latex

            See :ref:`source-init-py`

         .. only:: html

            .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/project.name/__init__.py.j2
               :start-after: -#}

      .. dropdown:: :file:`project_name/meson.build`

         .. versionadded:: 0.1

         The project source build script.

         .. only:: latex

            See :ref:`source-meson-build`

         .. only:: html

            .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/project.name/meson.build.j2
               :start-after: -#}

   .. dropdown:: :abbr:`test_source/ (meson.build variable test_source)`
      :icon: file-directory

      .. versionadded:: 0.1

      Source for pytest_ and :py:mod:`unittest`

   .. dropdown:: subprojects/
      :icon: file-submodule

      .. versionadded:: 0.1

      Meson subprojects and wrapfiles.

      .. dropdown:: :file:`ozi.wrap`
         :icon: file

         .. versionadded:: 0.1

         Entry point for OZI to initialize a packaging environment.

         .. only:: latex

            See :ref:`subprojects-ozi-wrap`

         .. only:: html

            .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/ozi.wrap.j2
               :start-after: -#}

   .. dropdown:: :file:`.gitignore`
      :icon: diff-ignored

      .. versionadded:: 0.1

      Specifies intentionally untracked files to ignore.

      .. only:: latex

         See :ref:`gitignore`

      .. only:: html

         .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/.gitignore.j2
            :start-after: -#}

   .. dropdown:: :file:`LICENSE.txt`
      :icon: law

      .. versionadded:: 0.1

      License terms for project distribution.

      .. only:: latex

         See :ref:`license-txt`

      .. only:: html

         .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/LICENSE.txt.j2
            :start-after: -#}

   .. dropdown:: :file:`README`
      :icon: info

      .. versionchanged:: 0.3

      Was previously just :file:`README.rst`.
      Repository and packaged README file (reStructuredText, Markdown, or plaintext).

      .. only:: latex

         See :ref:`readme-md`

      .. only:: html

         .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/README.md.j2
            :start-after: -#}

      .. only:: latex

         See :ref:`readme-rst`

      .. only:: html

         .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/README.rst.j2
            :start-after: -#}

      .. only:: latex

         See :ref:`readme-txt`

      .. only:: html

         .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/README.txt.j2
            :start-after: -#}

   .. dropdown:: :file:`requirements.in`
      :icon: info

      .. versionadded:: 0.1

      Any :term:`PyPI` dependencies.

      .. only:: latex

         See :ref:`requirements-in`

      .. only:: html

         .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/requirements.in.j2
            :start-after: -#}

   .. dropdown:: :file:`meson.build`
      :icon: project

      .. versionadded:: 0.1

      The main project build script.

      .. only:: latex

         See :ref:`meson-build`

      .. only:: html

         .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/project.meson.build
            :start-after: -#}

   .. dropdown:: :file:`meson.options`
      :icon: terminal

      .. versionadded:: 0.1

      Use :term:`meson options` for OZI and :term:`utility application` commandline arguments.

      .. only:: latex

         See :ref:`meson-options`

      .. only:: html

         .. rubric:: feature

         .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/project.feature.meson.options
            :language: meson
            :start-after: -#}

         .. rubric:: integer

         .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/project.integer.meson.options
            :language: meson
            :start-after: -#}

         .. rubric:: array

         .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/project.array.meson.options
            :start-after: -#}

   .. dropdown:: :term:`pyproject.toml`
      :icon: package

      .. versionadded:: 0.1

      Packaging configuration and project :term:`metadata` template.

      .. only:: latex

         See :ref:`pyproject-toml`

   .. dropdown:: :file:`PKG-INFO`
      :icon: info

      .. versionchanged:: 0.2
         MUST render PKG-INFO from :term:`metadata` template in :term:`pyproject.toml`.

      .. versionadded:: 0.1

      Packaged project metadata.

      .. only:: latex

         See :ref:`pkg-info`

      .. only:: html

         .. literalinclude:: assets/blastpipe/blastpipe/ozi_templates/project.PKG-INFO
            :start-after: -#}

|newpage|

PEP Compliance
^^^^^^^^^^^^^^

This section contains non-exhaustive lists of PEPs that OZI is an external
stakeholder for.

.. index::
   triple: specification; check; pep8
   triple: specification; check; pep287
   triple: specification; reject; pep420
   triple: specification; check; pep440
   triple: specification; check; pep484
   triple: specification; check; pep585
   triple: specification; allow; pep593
   triple: specification; reject; pep660
   triple: specification; check; pep680
   triple: specification; check; pep639
   triple: specification; check; pep3107

|bigskip|

.. card:: :octicon:`info;1.5em;sd-text-warning` :emphasis:`RECOMMENDED`

   |linebreak|

   .. grid:: 2

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`8`

         .. versionadded:: 0.1

         Style Guide for Python Code

      |bigskip|

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`287`

         .. versionadded:: 0.1

         reStructuredText Docstring Format

      |bigskip|

      .. grid-item-card:: :octicon:`checklist;1em;sd-text-info` implement :pep:`680`

         .. versionadded:: 0.1

         tomllib: Support for Parsing TOML in the Standard Library [#f1]_

|bigskip|

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. grid:: 2

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` reject :pep:`420`

         .. versionadded:: 0.1

         Implicit Namespace Modules [#f2]_

      |bigskip|

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`440`

         .. versionadded:: 0.1

         Version Identification and Dependency Specification

      |bigskip|

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`484`

         .. versionadded:: 0.1

         Type Hints

      |bigskip|

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`585`

         .. versionadded:: 0.1

         Type Hinting Generics In Standard Collections

      |bigskip|

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`3107`

         .. versionadded:: 0.1

         Function Annotation

      |bigskip|

      .. grid-item-card:: :octicon:`skip;1em;sd-text-warning` allow :pep:`593`

         .. versionadded:: 0.1

         Flexible function and variable annotations

      |bigskip|

      .. grid-item-card:: :octicon:`rocket;1em;sd-text-info` implement :pep:`639`

         .. versionadded:: 0.1

         Improving License Clarity with Better Package Metadata

      |bigskip|

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` reject :pep:`660`

         .. versionadded:: 0.1

         Editable installs for pyproject.toml based builds (:term:`wheel` based)

|linebreak|

.. card::

   .. [#f1] SHOULD use ``tomli`` if Python version < 3.11

   .. [#f2] SHOULD allow PEP 420 in :abbr:`test_source (meson.build variable test_source)`
      using ``# noqa: INP001``

.. card:: See also
   :class-card: seealso

   :ref:`lint`

|newpage|

Environment
-----------

The following describes the OZI environment expectations for Meson projects.
Project environment configuration expectations for ``tox`` are also provided.

Meson
^^^^^

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. card:: The minimum supported version of Meson is `version 1.1.0 <https://mesonbuild.com/Release-notes-for-1-1-0.html>`_.

      There are a number of concerns that would need to be addressed
      to backport OZI to Meson 1.0 and Meson 0.X releases.

      * The use of the 'in' operator on string options is not supported prior to 1.0
      * The use of the 'not in' operator on string options is not supported prior to 1.0
      * Support for reading options from meson.options was added in 1.1
      * Use of Feature.enable_auto_if() is not supported prior to 1.1
      * Use of FeatureOption.enable_if() is not supported prior to 1.1
      * Use of FeatureOption.disable_if() is not supported prior to 1.1
      * Use of fs.copyfile() is not supported prior to 0.64

   .. card:: Support 3 most recent :doc:`devguide:versions` in full releases.

      .. versionadded:: 0.1

      SHALL NOT support:

      * ``end-of-life``
      * ``prerelease``
      * ``feature``

   .. card:: Check :py:mod:`importlib.metadata` version for each utility.

      .. versionadded:: 0.1

      * SHOULD fallback to ``pip show`` for version.
      * SHOULD indicate version source for each utility.
      * MUST indicate unknown version if all checks fail.

   .. card:: Check ``dev`` key in ``project.optional-dependencies``.

      .. versionadded:: 0.1

      MUST use the following namespaces:

      * ``dist``
      * ``lint``
      * ``test``

   .. card:: Check ``README.rst`` matches ``setuptools_scm`` payload and ``PKG-INFO`` payload.

      .. versionadded:: 0.1

   .. card:: Write fallback configuration to ``pyproject.toml.pre``

      .. versionadded:: 0.1

      * ``@VCS_TAG@`` replaces itself so that meson configure succeeds.
      * ``@PYTHON_VERSION_DIST@`` is replaced with "pyXXX" where XXX is the python version without ".".
      * uncomment statements that would cause top-level utility failure in source with scripts.

   .. card:: Preprocess ``pyproject.toml.pre`` into :term:`pyproject.toml`

      .. versionadded:: 0.1

      * ``VCS_TAG`` is replaced with the actual supply chain managed version.

   .. card:: Distribute a binary in :term:`wheel` format.

      .. versionadded:: 0.1

   .. card:: Strip binary of any Python source files.

      .. versionadded:: 0.1

      MUST distribute :term:`wheel` releases as Python bytecode and stubfiles.

   .. card:: Isolate the executable with ``pipx``.

      .. versionadded:: 0.4

      MUST be executed via ``pipx run``

|bigskip|

.. card:: :octicon:`skip;1.5em;sd-text-warning` :emphasis:`RECOMMENDED`

   |linebreak|

   .. card:: Support ``prerelease`` Python in alpha, beta, and release candidate versions.

      .. versionadded:: 0.1


semantic-release
^^^^^^^^^^^^^^^^

Controls the release cycle based on commit patterns since the last release.

|bigskip|

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. versionadded:: 0.2

   .. card:: Must trigger releases in a discrete CI step.

.. card:: See also
   :class-card: seealso

   :ref:`REQUIRED semantic-release`


setuptools_scm
^^^^^^^^^^^^^^

:term:`setuptools_scm` controls the version information for the project
environment.

|bigskip|

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. versionadded:: 0.1

   .. card:: Use project configuration:

      .. only:: latex

         See :ref:`setuptools_scm-config`

      .. only:: html

         :download:`assets/blastpipe/blastpipe/ozi_templates/setuptools_scm.pyproject.toml`

tox
^^^

OZI uses :term:`tox` to manage integration testing across supported Python
releases. Positional arguments are provided to a standardized
``meson test`` configuration.

|bigskip|

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. grid:: 2

      .. grid-item-card:: Successful setup of :ref:`dist` environment.

         .. versionadded:: 0.1

         .. code-block:: sh

            tox -e dist

      .. grid-item-card:: Successful setup of :ref:`lint` environment

         .. versionadded:: 0.1

         .. code-block:: sh

            tox -e lint

      .. grid-item-card:: Successful setup of :ref:`test` environment

         .. versionadded:: 0.1

         .. code-block:: sh

            tox -e test

   .. card:: Use project configuration:

      .. only:: html

         :download:`assets/blastpipe/blastpipe/ozi_templates/tox.pyproject.toml`

      .. only:: latex

         See :ref:`tox-config`

|newpage|

Publishing Scripts
------------------

This discusses the scripts that will be used to create packages with OZI.

General
^^^^^^^

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. card:: If stdout is not to be used directly output in :term:`Test Anything Protocol`

      .. versionadded:: 0.1

ozi-fix
^^^^^^^

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. card:: Output :term:`meson rewriter commands` to edit ``meson.build`` file and subdir list targets.

      .. versionadded:: 0.1

   .. card:: Creates subdirectories with a :term:`meson build definition` containing file and subdir list targets.

      .. versionadded:: 0.1

ozi-new
^^^^^^^

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. card:: Create new Python project files from specific templates.

      .. versionadded:: 0.1

   .. card:: List output of available :term:`PyPI` :term:`classifiers`.

      .. versionadded:: 0.1

      * Development Status
      * Environment
      * Framework
      * Intended Audience
      * License
      * Natural Language
      * Topic

   .. card:: List output of available :term:`metadata` header fields.

      .. versionadded:: 0.1

   .. card:: List output of :term:`SPDX short identifier` license names.

      .. versionadded:: 0.1

   .. card:: List output of :term:`SPDX license exception`.

      .. versionadded:: 0.1

|newpage|

Utilities
---------

General
^^^^^^^

This section lists the third-party :term:`utility program` specifications.

|bigskip|

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

   |linebreak|

   .. index:: utilities; exit; successfully
   .. card:: Exit successfully within :term:`checkpoint step`.

      .. versionadded:: 0.1

   .. index:: pyproject.toml; configuration; packaging
   .. card:: Provide packaging configuration with :term:`pyproject.toml`.

      .. versionadded:: 0.1

   .. index:: meson; options; commandline
   .. card:: Provide commandline arguments through :term:`meson options` with :file:`meson.options`.

      .. versionadded:: 0.1

   .. index:: PKG-INFO; project; version
   .. card:: Provide single source of truth for project version :term:`metadata` in PKG-INFO (:doc:`specification <pypa:specifications/core-metadata>`).

      .. versionadded:: 0.1

   .. index:: PKG-INFO; future; metadata
   .. card:: Provide header content field :term:`metadata` that have yet to be implemented in PKG-INFO payload.

      .. versionadded:: 0.1

   .. index:: utilities; isolate; pipx
   .. card:: Isolate python executables with :term:`pipx`.

      .. versionadded:: 0.4

      Excluding:
         * ``pytest``

      Python apps with ``console_scripts`` :term:`entry points` MUST be installed via ``pipx runpip meson install ...``

.. index:: triple: specification; utilities; dist
.. include:: dist.inc

.. index:: triple: specification; utilities; lint
.. include:: lint.inc

.. index:: triple: specification; utilities; test
.. include:: test.inc

.. include:: pypi_links.inc

|newpage|
