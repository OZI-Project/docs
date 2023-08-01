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
.. _lint:

〽 lint
^^^^^^^

.. dropdown:: REQUIRED
   :open:

   .. index:: triple: utilities; environment; checkpointing

   .. index::
      triple: utilities; security; bandit
      triple: utilities; lint; security

   .. rubric:: bandit

   .. card:: MUST respect :doc:`plugins <bandit:plugins/index>`:

      * B101-B113
      * B201-B202
      * B301-B324
      * B401-B415
      * B501-B509
      * B601-B612
      * B701-B703

   .. card:: MUST ignore nosec comments (``--ignore-nosec``)
   
   .. card::  MUST target ``@project_name@`` recursively

   .. dropdown:: REQUIRED commandline arguments
      :open:

      .. include:: bandit_options.inc

   .. dropdown:: REQUIRED project configuration
      :open:

      .. include:: bandit_pyproject.inc

   .. index:: 
      triple: utilities; formatters; black
      triple: utilities; lint; formatters

   .. rubric:: black

   * MUST exclude gitignore listed (``--exclude .gitignore``)
   * MUST show differences (``--diff``)
   * MUST run in check mode (``--check``)
   * MUST skip string normalization (``-S``)
   * MUST target ``@project_name@``

   .. dropdown:: REQUIRED commandline arguments
      :open:

      .. include:: black_options.inc

   .. dropdown:: REQUIRED project configuration
      :open:

      .. include:: black_pyproject.inc

   .. index::
      triple: utilities; linters; flake8
      triple: utilities; lint; linters

   .. rubric:: flake8p(Flake8-pyproject)See also

   * MUST respect noqa comments
   * MUST check maximum complexity between 5 and 8
   * MUST allow ``# noqa: C901`` if complexity <= 8
   * MUST allow ``# noqa: INP001`` in ``tests/*.py`` and ``scripts/*.py``
   * SHOULD check maximum complexity of 5 (``--max-complexity=5``)
   * SHOULD exclude ``build-env-*``, ``venv``, ``build*``, ``*.pyi``

   .. dropdown:: RECOMMENDED Flake8 Plugins

      * SHOULD check flake8-annotations_ ANN001-ANN003, ANN101-ANN102, ANN201-ANN206
      * SHOULD check flake8-broken-line_ N400
      * SHOULD check flake8-bugbear_ B001-B034, B950
      * SHOULD check flake8-comprehensions_ C400-C419
      * SHOULD check flake8-datetimez_ DTZ001-DTZ012
      * SHOULD check flake8-docstring-checker_ DC100-DC104
      * SHOULD check flake8-eradicate_ E800
      * SHOULD check flake8-fixme_ T100-T102
      * SHOULD check flake8-leading-blank-lines_ LBL001
      * SHOULD check flake8-no-pep420_ INP001
      * SHOULD check flake8-pyi_ Y001-Y057
      * SHOULD check flake8-pytest-style_ PT001-PT027
      * SHOULD check flake8-quotes_ Q000-Q003
      * SHOULD check flake8-tidy-imports_ I250, I252
      * SHOULD check flake8-type-checking_ TC001-TC006

   .. dropdown:: REQUIRED commandline arguments
      :open:

      .. include:: flake8_options.inc

   .. dropdown:: REQUIRED project configuration
      :open:

      .. include:: flake8_pyproject.inc

   .. index:: 
      triple: utilities; formatters; isort
      triple: utilities; lint; formatters

   .. rubric:: isort

   * MUST show differences (``--diff``)
   * MUST run in check mode (``--check``)
   * MUST skip stubfiles (``--skip-glob *.pyi``)
   * MUST target ``@project_name@``

   .. dropdown:: REQUIRED commandline arguments
      :open:

      .. include:: isort_options.inc

   .. dropdown:: REQUIRED project configuration
      :open:

      .. include:: isort_pyproject.inc

   .. index::
      triple: utilities; linters; pylint
      triple: utilities; lint; linters

   .. rubric:: mypy

   * MUST target ``@project_name@`` and ``@test_source@``
   * MUST run in strict mode
   * MUST implicitly reexport modules

   .. dropdown:: REQUIRED commandline arguments
      :open:

      .. include:: mypy_options.inc

   .. dropdown:: REQUIRED project configuration
      :open:

      .. include:: mypy_pyproject.inc

   .. rubric:: pyright

   .. dropdown:: REQUIRED commandline arguments
      :open:

      .. include:: pyright_options.inc

.. dropdown:: OPTIONAL

   .. rubric:: pylint

   .. dropdown:: RECOMMENDED project configuration

      .. include:: pylint_pyproject.inc

   .. index::
      triple: utilities; typecheckers; pyright
      triple: utilities; lint; typecheckers
