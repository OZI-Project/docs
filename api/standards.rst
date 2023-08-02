.. Copyright 2023 Ross J. Duff MSc 
   The copyright holder licenses this file
   to you under the Apache License, Version 2.0 (the
   "License"); you may not use this file except in compliance
   with the License.  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing,
   software distributed under the License is distributed on an
   "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
   KIND, either express or implied.  See the License for the
   specific language governing permissions and limitations
   under the License.

.. index::
   triple: standards; check; pep8
   triple: standards; check; pep257
   triple: standards; check; pep301
   triple: standards; reject; pep420
   triple: standards; check; pep440
   triple: standards; check; pep484
   triple: standards; check; pep517
   triple: standards; check; pep518
   triple: standards; reject; pep660
   triple: standards; check; pep680
   triple: standards; check; pep639
   triple: standards; check; pep3107

.. meta::
   :description: Standards for the OZI Python packaging for Meson API.
   :keywords: standards, OZI, Python, API, packaging, Meson

=============
API Standards
=============

This document contains the standards for the OZI Python packaging for Meson API.
This is a work in progress as a part of Pre-alpha development.

* TODO: add default ``@script_source@`` to OZI
* TODO: check unicodedata2==14.0.0 on Python 3.9 and 3.10
(currently supported versions are using a mix of :py:obj:`unicodedata.unidata_version` 
13.0.0 and 14.0.0)
* TODO: lint check ``import unicodedata2 as unicodedata``

.. index::
   triple: standards; normative; references

➕ Normative References
-----------------------

This document also contains normative references to :abbr:`RFC (Request for Comments)`,
:abbr:`PEP (Python Enhancement Proposal)` standards,
gitmoji specification,
:abbr:`ISO (International Organization for Standardization)`/:abbr:`IEC
(International Electrotechnical Commission)` standards, 
:abbr:`PyPA (Python Packaging Authority)` specifications, and
:abbr:`TOML (Tom's Obvious, Minimal Language)` specification.

The key words "MUST", "MUST NOT", "REQUIRED", "SHALL", "SHALL NOT",
"SHOULD", "SHOULD NOT", "RECOMMENDED", "MAY", and "OPTIONAL"
in this document are to be interpreted as described in :rfc:`2119`.

.. seealso::

   `gitmoji <https://gitmoji.dev/specification>`_ 

   `Python Enhancement Proposal Index <https://peps.python.org/pep-0000/>`_

   `Python Packaging Authority specifications <https://packaging.python.org/en/latest/specifications/#pypa-specifications>`_

   `Request for Comments <https://www.rfc-editor.org/rfc-index-100a.html>`_

   `Tom's Obvious Minimal Language <https://toml.io/en/v1.0.0>`_

📝 Documentation
----------------

.. index:: triple: standards; documentation; format

〽 Format
^^^^^^^^^

.. card:: REQUIRED

   .. card:: Use mimetype :mimetype:`text/x-rst` for ``README.rst``
   
   .. card:: Respect maximum line width limit 93.

.. card:: RECOMMENDED
   
   .. card:: Prefer LF over CRLF line-endings.

✨ Source
---------

.. card:: RECOMMENDED

   .. card:: Normalize unicodedata.unidata_version between minor Python releases.

      Use the latest ISO/IEC 10646, 2021 being the most recent and aligned to version 14.0.0 of unidata.

.. index:: triple: standards; source; format

〽 Format
^^^^^^^^^

.. card:: REQUIRED

   .. card:: Respect maximum line width limit 93

.. card:: RECOMMENDED

   .. card:: Prefer LF over CRLF line-endings

〽 Structure
^^^^^^^^^^^^

.. card:: REQUIRED

   .. dropdown:: :abbr:`project_name (meson.build variable project_name)`/       
      :icon: file-directory

      Python sources, submodules, and stubfiles.

      .. dropdown:: :file:`__init__.py`

         Python package module entry point.

      .. dropdown:: scripts/
         :icon: file-directory

         OPTIONAL

   .. dropdown:: :abbr:`test_source (meson.build variable test_source)`/
      :icon: file-directory

      Source for pytest_ and :py:mod:`unittest`

   .. dropdown:: subprojects/
      :icon: file-submodule

      Meson subprojects and wrapfiles.

      .. dropdown:: :file:`ozi.wrap`
         :icon: file
         :open:

         Entry point for OZI to initialize a packaging environment.

   .. dropdown:: .gitignore
      :icon: diff-ignored

      Specifies intentionally untracked files to ignore.

   .. dropdown:: LICENSE.txt
      :icon: law

      License terms for project distribution.

   .. dropdown:: meson.build
      :icon: project

      The main project build script.

   .. dropdown:: meson.options
      :icon: terminal

      Options for OZI and utility commandline arguments.

   .. dropdown:: pyproject.toml
      :icon: package

      Packaging configuration and project metadata template.

   .. dropdown:: PKG-INFO
      :icon: info

      Packaged project metadata.


〽 PEP Compliance
^^^^^^^^^^^^^^^^^


.. card:: RECOMMENDED

   .. grid:: 2

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`8`
         :link: https://peps.python.org/pep-0008/

         Style Guide for Python Code

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` reject :pep:`420`

         Implicit Namespace Modules [#f1]_

      .. grid-item-card:: :octicon:`checklist;1em;sd-text-info` implement :pep:`680`
         :link: https://peps.python.org/pep-0680/
         
         tomllib: Support for Parsing TOML in the Standard Library
         
         SHOULD use ``tomli`` if Python version < 3.11 

   .. rubric:: Footnotes

   .. [#f1] MUST allow in ``@test_source@`` and ``@script_source@`` using ``# noqa: INP001``

.. card:: REQUIRED

   .. grid:: 2

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`287`
         :link: https://peps.python.org/pep-0287/

         reStructuredText Docstring Format

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`440`
         :link: https://peps.python.org/pep-0440/

         Version Identification and Dependency Specification

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`484`
         :link: https://peps.python.org/pep-0484/

         Type Hints

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`585`
         :link: https://peps.python.org/pep-0585/

         Type Hinting Generics In Standard Collections

      .. grid-item-card:: :octicon:`check-circle;1em;sd-text-info` check :pep:`3107`
         :link: https://peps.python.org/pep-3107/

         Function Annotation

      .. grid-item-card:: :octicon:`skip;1em;sd-text-warning` allow :pep:`593`
         :link: https://peps.python.org/pep-0593/

         Flexible function and variable annotations

      .. grid-item-card:: :octicon:`blocked;1em;sd-text-danger` reject :pep:`660`
         :link: https://peps.python.org/pep-0660/

         Editable installs for pyproject.toml based builds (wheel based)




.. seealso::

   :ref:`lint`

.. index::
   triple: standards; python; support
   triple: python; support; unicodedata
   pair: unicodedata; unidata_version

🚀 Environment
--------------

〽 Meson setup
^^^^^^^^^^^^^^

.. card:: REQUIRED

   .. card:: Support 3 most recent :doc:`devguide:versions` in full releases.

      SHALL NOT support:

      * ``end-of-life``
      * ``prerelease``
      * ``feature``

   .. card:: Check :py:mod:`importlib.metadata` version for each utility environment

      .. card:: Supply a ``dev`` namespace in ``project.optional-dependencies``.

      .. card:: Supply ``dist``, ``docs``, ``lint``, and ``test`` namespaces in ``dev``.

   .. card:: Check that ``README.rst`` matches ``setuptools_scm`` payload and ``PKG-INFO`` payload.

.. card:: RECOMMENDED

   .. card:: Support ``prerelease`` Python in alpha, beta, and release candidate versions.


〽 Meson test
^^^^^^^^^^^^^

.. card:: REQUIRED

   .. card:: Support 3 most recent :doc:`devguide:versions` in full releases.

      SHALL NOT support  ``end-of-life``, ``prerelease``, or ``feature`` status in full releases.

   .. card:: Successful setup of :ref:`dist` environment.

      .. code-block:: sh

         tox -- --setup=dist

   .. card:: Successful setup of :ref:`docs` environment.

      .. code-block:: sh

         tox -- --setup=docs

   .. card:: Successful setup of :ref:`lint` environment

      .. code-block:: sh

         tox -- --setup=lint

   .. card:: Successful setup of :ref:`test` environment

      .. code-block:: sh

         tox -- --setup=test

   .. card:: Use project configuration:

      .. include:: tox_pyproject.inc

.. card:: RECOMMENDED

   .. card:: Support ``prerelease`` Python in alpha, beta, and release candidate versions.


💚 Utilities
------------

.. index::
   triple: meson.options; options; commandline
   triple: pyproject.toml; configuration; packaging
   triple: PKG-INFO; project; version
   triple: utilities; exit; successfully


.. card:: REQUIRED

   .. card:: Exit successfully during environment test.

   .. card:: Provide packaging configuration with ``pyproject.toml``.

   .. card:: Provide commandline arguments with ``meson.options``.

   .. card:: Provide single source of truth for project version in ``PKG-INFO``
     (:doc:`specification <pypa:specifications/core-metadata>`).

.. index:: triple: standards; utilities; dist
.. include:: dist.inc
.. index:: triple: standards; utilities; docs
.. include:: docs.inc
.. index:: triple: standards; utilities; lint
.. include:: lint.inc
.. index:: triple: standards; utilities; test
.. include:: test.inc

.. include:: pypi_links.inc