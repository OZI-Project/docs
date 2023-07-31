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
This is a work in progress as a part of Pre-alpha development

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

.. seealso::

   `gitmoji <https://gitmoji.dev/specification>`_ 

   `Python Enhancement Proposal Index <https://peps.python.org/pep-0000/>`_

   `Python Packaging Authority specifications <https://packaging.python.org/en/latest/specifications/#pypa-specifications>`_

   `Request for Comments <https://www.rfc-editor.org/rfc-index-100a.html>`_

   `Tom's Obvious Minimal Language <https://toml.io/en/v1.0.0>`_

The key words "MUST", "MUST NOT", "REQUIRED", "SHALL", "SHALL NOT",
"SHOULD", "SHOULD NOT", "RECOMMENDED", "MAY", and "OPTIONAL"
in this document are to be interpreted as described in :rfc:`2119`.

📝 Documentation
----------------

.. index:: triple: standards; documentation; format

〽️ Format
^^^^^^^^^^

* MUST use Mimetype :mimetype:`text/x-rst` for ``README.rst``
* SHOULD prefer LF over CRLF line-endings
* MUST respect maximum line width limit 93

✨ Source
---------

* SHOULD normalize unicodedata.unidata_version between minor Python releases to the latest 
  ISO/IEC 10646, 2021 being the most recent and aligned to version 14.0.0 of unidata.
  TODO: check unicodedata2==14.0.0 on Python 3.9 and 3.10
  (currently supported versions are using a mix of :py:obj:`unicodedata.unidata_version` 
  13.0.0 and 14.0.0)
  TODO: lint check ``import unicodedata2 as unicodedata``

.. index:: triple: standards; source; format

〽️ Format
^^^^^^^^^^

* SHOULD prefer LF over CRLF line-endings
* MUST respect maximum line width limit 93

〽️ Structure
^^^^^^^^^^^^^


.. dropdown:: top-level project layout
   :open:

   .. dropdown:: ``project_name``/       
   
      .. dropdown:: __init__.py
      .. dropdown:: ...

   .. dropdown:: ``test_source``/

      .. dropdown:: ...

   .. dropdown:: subprojects/

      .. dropdown:: ozi.wrap
      .. dropdown:: ...

   .. dropdown:: .gitignore
   .. dropdown:: LICENSE.txt
   .. dropdown:: meson.build
   .. dropdown:: meson.options
   .. dropdown:: pyproject.toml
   .. dropdown:: PKG-INFO
   .. dropdown:: ...

〽️ PEP Compliance
^^^^^^^^^^^^^^^^^^

* SHOULD check :pep:`8` - Style Guide for Python Code
* MUST check :pep:`287` - reStructuredText Docstring Format
* MUST check :pep:`440` - Version Identification and Dependency Specification
* MUST check :pep:`484` - Type Hints
* SHOULD reject :pep:`420` - Implicit Namespace Modules [#f1]_
* MUST check :pep:`585` - Type Hinting Generics In Standard Collections
* MUST allow :pep:`593` - Flexible function and variable annotations
* MUST reject :pep:`660` - Editable installs for pyproject.toml based builds (wheel based)
* SHOULD implement :pep:`680` TOML support with ``tomli`` if Python version < 3.11 
* MUST check :pep:`3107` - Function Annotation

.. rubric:: Footnotes

.. [#f1] MUST allow in ``@test_source@`` and ``@script_source@`` using ``# noqa: INP001``

.. seealso::

   :ref:`lint`

.. index::
   triple: standards; python; support
   triple: python; support; unicodedata
   pair: unicodedata; unidata_version

🚀 Environment
--------------

〽️ Meson setup
^^^^^^^^^^^^^^^

* MUST support the 3 most recent :doc:`devguide:versions` that are not
  ``end-of-life``, ``prerelease``, or ``feature`` status.
* MAY support ``prerelease`` Python in alpha, beta, and release candidate versions.
* MUST check :py:mod:`importlib.metadata` version for each utility environment in
  ``project.optional-dependencies``
* MUST check that ``README.rst`` matches ``setuptools_scm`` ``write_to_file`` payload and 
  ``PKG-INFO`` payload during the build step.

〽️ Meson test
^^^^^^^^^^^^^^

* MUST support the 3 most recent :doc:`devguide:versions` that are not
  ``end-of-life``, ``prerelease``, or ``feature`` status.
* MAY support ``prerelease`` Python in alpha, beta, and release candidate versions.

.. code-block:: sh
   :caption: MUST log successful test of :ref:`dist` environment

   tox -- --setup=dist

.. code-block:: sh
   :caption: SHOULD log successful test of :ref:`docs` environment

   tox -- --setup=docs

.. code-block:: sh
   :caption: MUST log successful test of :ref:`lint` environment

   tox -- --setup=lint

.. code-block:: sh
   :caption: MUST log successful test of :ref:`test` environment

   tox -- --setup=test



.. dropdown:: REQUIRED project configuration
   :open:

   .. include:: tox_pyproject.inc

💚 Utilities
------------

.. index::
   triple: meson.options; options; commandline
   triple: pyproject.toml; configuration; packaging
   triple: PKG-INFO; project; version
   triple: utilities; exit; successfully

For all commandline tools:

* MUST exit successfully during environment test
* MUST provide packaging configuration with ``pyproject.toml``
* MUST provide commandline options with ``meson.options``
* MUST provide single source of truth for project version in ``PKG-INFO``
  (:doc:`specification <pypa:specifications/core-metadata>`)

.. index:: triple: standards; utilities; dist
.. include:: dist.inc
.. index:: triple: standards; utilities; docs
.. include:: docs.inc
.. index:: triple: standards; utilities; lint
.. include:: lint.inc
.. index:: triple: standards; utilities; test
.. include:: test.inc

.. include:: pypi_links.inc