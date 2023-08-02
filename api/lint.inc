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

.. card:: REQUIRED

   .. index:: triple: utilities; environment; checkpointing

   .. index::
      triple: utilities; security; bandit
      triple: utilities; lint; security

   .. rubric:: bandit

   .. dropdown:: specification
      :icon: info

      * MUST respect :doc:`plugins <bandit:plugins/index>`:
         * B101-B113
         * B201-B202
         * B301-B324
         * B401-B415
         * B501-B509
         * B601-B612
         * B701-B703
      * MUST ignore nosec comments (``--ignore-nosec``)
      * MUST target ``@project_name@`` recursively

   .. dropdown:: arguments
      :icon: terminal

      .. include:: bandit_options.inc

   .. dropdown:: configuration
      :icon: package

      .. include:: bandit_pyproject.inc

   .. index:: 
      triple: utilities; formatters; black
      triple: utilities; lint; formatters

   .. rubric:: black
   .. dropdown:: specification
      :icon: info

      * MUST exclude gitignore listed (``--exclude .gitignore``)
      * MUST show differences (``--diff``)
      * MUST run in check mode (``--check``)
      * MUST skip string normalization (``-S``)
      * MUST target ``@project_name@``

   .. dropdown:: arguments
      :icon: terminal

      .. include:: black_options.inc

   .. dropdown:: configuration
      :icon: package

      .. include:: black_pyproject.inc

   .. index::
      triple: utilities; linters; flake8
      triple: utilities; lint; linters

   .. rubric:: flake8p(Flake8-pyproject)
   
   .. dropdown:: specification
      :icon: info

      * MUST respect noqa comments
      * MUST check maximum complexity between 5 and 8
      * MUST allow ``# noqa: C901`` if complexity <= 8
      * MUST allow ``# noqa: INP001`` in ``tests/*.py`` and ``scripts/*.py``
      * SHOULD check maximum complexity of 5 (``--max-complexity=5``)
      * SHOULD exclude ``build-env-*``, ``venv``, ``build*``, ``*.pyi``

   .. dropdown:: plugins
      :icon: plug

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

   .. dropdown:: arguments
      :icon: terminal

      .. include:: flake8_options.inc

   .. dropdown:: configuration
      :icon: package

      .. include:: flake8_pyproject.inc

   .. index:: 
      triple: utilities; formatters; isort
      triple: utilities; lint; formatters

   .. rubric:: isort

   .. dropdown:: specification
      :icon: info

      * MUST show differences (``--diff``)
      * MUST run in check mode (``--check``)
      * MUST skip stubfiles (``--skip-glob *.pyi``)
      * MUST target ``@project_name@``

   .. dropdown:: arguments
      :icon: terminal

      .. include:: isort_options.inc

   .. dropdown:: configuration
      :icon: package

      .. include:: isort_pyproject.inc

   .. index::
      triple: utilities; linters; pylint
      triple: utilities; lint; linters

   .. rubric:: mypy
   .. dropdown:: specification
      :icon: info

      * MUST target ``@project_name@`` and ``@test_source@``
      * MUST run in strict mode
      * MUST implicitly reexport modules

   .. dropdown:: arguments
      :icon: terminal

      .. include:: mypy_options.inc

   .. dropdown:: configuration
      :icon: package

      .. include:: mypy_pyproject.inc

   .. rubric:: pyright

   .. dropdown:: arguments
      :icon: terminal

      .. include:: pyright_options.inc

.. card:: OPTIONAL

   .. rubric:: pylint

   .. dropdown:: configuration
      :icon: package

      .. include:: pylint_pyproject.inc

   .. index::
      triple: utilities; typecheckers; pyright
      triple: utilities; lint; typecheckers
