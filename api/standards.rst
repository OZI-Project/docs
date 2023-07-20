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

.. index::
   triple: standards; normative; references

Normative References
--------------------

This document also contains normative references to :abbr:`RFC (Request for Comments)`,
:abbr:`PEP (Python Enhancement Proposal)` standards, 
:abbr:`ISO (International Organization for Standardization)`/:abbr:`IEC
(International Electrotechnical Commission)` standards, 
:abbr:`PyPA (Python Packaging Authority)` specifications, and
:abbr:`TOML (Tom's Obvious, Minimal Language)` specification.

.. seealso::
   `Python Enhancement Proposal Index <https://peps.python.org/pep-0000/>`_

   `Python Packaging Authority specifications <https://packaging.python.org/en/latest/specifications/#pypa-specifications>`_

   `Request for Comments <https://www.rfc-editor.org/rfc-index-100a.html>`_

   `Tom's Obvious Minimal Language <https://toml.io/en/v1.0.0>`_

The key words "MUST", "MUST NOT", "REQUIRED", "SHALL", "SHALL NOT",
"SHOULD", "SHOULD NOT", "RECOMMENDED", "MAY", and "OPTIONAL"
in this document are to be interpreted as described in :rfc:`2119`.

Documentation
-------------

.. index:: triple: standards; documentation; format

Format
^^^^^^

* MUST use Mimetype :mimetype:`text/x-rst` for ``README.rst``
* SHOULD prefer LF over CRLF line-endings
* MUST respect maximum line width limit 93

Source
------

.. index:: triple: standards; source; format

Format
^^^^^^

* SHOULD prefer LF over CRLF line-endings
* MUST respect maximum line width limit 93

PEP Compliance
^^^^^^^^^^^^^^

* SHOULD check :pep:`8` - Style Guide for Python Code
* MUST check :pep:`287` - reStructuredText Docstring Format
* MUST check :pep:`440` - Version Identification and Dependency Specification
* MUST check :pep:`484` - Type Hints
* MUST check :pep:`3107` - Function Annotation
* SHOULD reject :pep:`420` - Implicit Namespace Modules [#f1]_
* MUST reject :pep:`660` - Editable installs for pyproject.toml based builds (wheel based)

.. rubric:: Footnotes

.. [#f1] MUST allow tests and scripts using ``# noqa: INP001``

.. index::
   triple: standards; python; support
   triple: python; support; unicodedata
   pair: unicodedata; unidata_version

Environment Checkpointing
-------------------------

For each Python version supported:

* MUST log successful test of :doc:`lint` environment
* MUST log successful test of :doc:`test` environment
* MUST log successful test of :doc:`docs` environment
* MUST log successful test of :doc:`dist` environment

Python Support
--------------

* MUST support the 3 most recent :doc:`devguide:versions` that are not
  ``end-of-life``, ``prerelease``, or ``feature`` status.
* MUST normalize unicode version between minor Python releases to the latest ISO/IEC 10646,
  2021 being the most recent and aligned to version 14.0.0 of unidata.

  TODO: check unicodedata2==14.0.0 on Python 3.9 and 3.10  (currently supported versions are using a mix of :py:data:`unicodedata.unidata_version` 
  13.0.0 and 14.0.0)
  TODO: check ``import unicodedata2 as unicodedata`` on Python 3.9 and 3.10

.. index:: pair: standards; utilities

Utilities(lint)
---------------

.. index:: triple: utilities; environment; checkpointing

.. index::
   triple: meson.options; options; commandline-only
   triple: pyproject.toml; configuration; packaging
   triple: PKG-INFO; project; version
   triple: utilities; exit; successfully

For all commandline tools:

* MUST provide packaging configuration with ``pyproject.toml``
* MUST provide commandline-only options with ``meson.options``
* MUST provide single source of truth for project version ``PKG-INFO``
  (:doc:`specification <pypa:specifications/core-metadata>`)
* SHOULD provide entry point for OZI as ``subprojects/ozi.wrap``
* MUST exit successfully

.. index::
   triple: utilities; security; bandit
   triple: utilities; lint; security

REQUIRED: bandit
^^^^^^^^^^^^^^^^

* MUST respect :doc:`test plugins <bandit:plugins/index>`:
  B101-B113, B201-B202, B301-B324, B401-B415, B501-B509, B601-B612, B701-B703

In ``meson.options`` under ``args-bandit``:

* MUST ignore nosec comments (``--ignore-nosec``)

.. index:: 
   triple: utilities; formatters; black
   triple: utilities; lint; formatters

REQUIRED: black
^^^^^^^^^^^^^^^

In ``meson.options`` under ``black-args``:

* MUST show differences (``--diff``)
* MUST run in check mode (``--check``)
* MUST skip string normalization (``-S``)

In ``pyproject.toml`` under ``[tool.black]``:

* MUST set ``line-length = 93``

.. index::
   triple: utilities; linters; flake8
   triple: utilities; lint; linters

REQUIRED: flake8
^^^^^^^^^^^^^^^^

* MUST respect noqa comments
* MUST allow ``# noqa: C901`` if complexity <= 8
* MUST allow ``# noqa: INP001`` in ``tests/*.py`` and ``scripts/*.py``
* MUST check flake8-annotations ANN001-ANN003, ANN101-ANN102, ANN201-ANN206
* MUST check flake8-broken-line N400
* MUST check `flake8-bugbear <https://pypi.org/project/flake8-bugbear/23.7.10/>`_ B001-B034, B950
* MUST check flake8-comprehensions C400-C419
* MUST check flake8-datetimez DTZ001-DTZ012
* MUST check flake8-docstring-checker DC100-DC104
* MUST check flake8-eradicate E800
* MUST check flake8-fixme T100-T102
* MUST check flake8-leading-blank-lines LBL001
* MUST check flake8-no-pep420 INP001
* MUST check flake8-pyi Y001-Y057
* MUST check flake8-pytest-style PT001-PT027
* MUST check flake8-quotes Q000-Q003
* MUST check `flake8-tidy-imports <https://pypi.org/project/flake8-tidy-imports/4.10.0/>`_
  I250, I252
* MUST check flake8-type-checking TC001-TC006

In ``meson.options`` under ``flake8-args``:

* SHOULD check maximum complexity of 5 (``--max-complexity=5``)
* MUST check maximum complexity between 5 and 8

In ``pyproject.toml`` under ``[tool.flake8]``:

* MUST set ``max-line-length = 93``
* MUST set ``extend-exclude = ["build-env-*", "venv", "build*"]``
* MUST set ``extend-ignore = "E501"``
* MUST set ``extend-select = "B950"``

.. index:: 
   triple: utilities; formatters; isort
   triple: utilities; lint; formatters

REQUIRED: isort
^^^^^^^^^^^^^^^

In ``meson.options`` under ``isort-args``:

* MUST show differences (``--diff``)
* MUST run in check mode (``--check``)

In ``pyproject.toml`` under ``[tool.isort]``:

* MUST set ``line_length = 93``
* MUST set ``profile = "black"``
* MUST set ``verbose = true``

.. index::
   triple: utilities; linters; pylint
   triple: utilities; lint; linters

REQUIRED: mypy
^^^^^^^^^^^^^^

In ``meson.options`` under ``mypy-args``:

* MUST target ``project_source`` and ``test_source``

In ``pyproject.toml`` under ``[tool.mypy]``:

* MUST set ``strict = true``
* MUST set ``implicit_reexport = true``)

OPTIONAL: pylint
^^^^^^^^^^^^^^^^

In ``pyproject.toml`` under ``[tool.pylint.MASTER]``:

* MUST set ``check-quote-consistency = true``
* SHOULD set ``expected-line-ending-format = "LF"``
* MUST set ``max-nested-blocks = 4``
* SHOULD set ``max-line-length = 93``
* MUST set ``disable = "C0301"``

.. index::
   triple: utilities; typecheckers; pyright
   triple: utilities; lint; typecheckers

REQUIRED: pyright
^^^^^^^^^^^^^^^^^

In ``meson.options`` under ``pyright-args``:

* MUST show statistics (``--stats``)
* MUST run with warnings as errors (``--warnings``)
