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

lint
^^^^

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

|linebreak|

   .. versionadded:: 0.1

   .. index:: triple: utilities; environment; checkpointing

   .. index::
      triple: utilities; security; bandit
      triple: utilities; lint; security

   .. rubric:: bandit

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

      .. only:: latex

         See :ref:`bandit-args`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/bandit.meson.options`

   .. dropdown:: configuration
      :icon: package

      .. only:: latex

         See :ref:`bandit-config`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/bandit.pyproject.toml`

   .. index:: 
      triple: utilities; formatters; black
      triple: utilities; lint; formatters

   .. rubric:: black

   * MUST exclude gitignore listed (``--exclude .gitignore``)
   * MUST show differences (``--diff``)
   * MUST run in check mode (``--check``)
   * MUST skip string normalization (``-S``)
   * MUST target ``@project_name@``

   .. dropdown:: arguments
      :icon: terminal

      .. only:: latex

         See :ref:`black-args`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/black.meson.options`

   .. dropdown:: configuration
      :icon: package

      .. only:: latex

         See :ref:`black-config`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/black.pyproject.toml`

   .. index::
      triple: utilities; linters; flake8
      triple: utilities; lint; linters

   .. rubric:: flake8p(Flake8-pyproject)

   * MUST respect noqa comments
   * MUST check maximum complexity between 5 and 8
   * MUST allow ``# noqa: C901`` if complexity <= 8
   * MUST allow ``# noqa: INP001`` in ``tests/*.py`` and ``scripts/*.py``
   * SHOULD check maximum complexity of 5 (``--max-complexity=5``)
   * SHOULD exclude ``build-env-*``, ``venv``, ``build*``, ``*.pyi``

   .. dropdown:: plugins
      :icon: plug

      * flake8-annotations_ ANN001-ANN003, ANN101-ANN102, ANN201-ANN206
      * flake8-broken-line_ N400
      * flake8-bugbear_ B001-B034, B950
      * flake8-comprehensions_ C400-C406, C408-C419
      * flake8-datetimez_ DTZ001-DTZ012
      * flake8-docstring-checker_ DC100-DC104
      * flake8-eradicate_ E800
      * flake8-fixme_ T100-T102
      * flake8-leading-blank-lines_ LBL001
      * flake8-no-pep420_ INP001
      * flake8-pyi_ Y001-Y057
      * flake8-pytest-style_ PT001-PT027
      * flake8-quotes_ Q000-Q003
      * flake8-tidy-imports_ I250, I252
      * flake8-type-checking_ TC001-TC006

   .. dropdown:: arguments
      :icon: terminal

      .. only:: latex

         See :ref:`flake8-args`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/flake8.meson.options`

   .. dropdown:: configuration
      :icon: package

      .. only:: latex

         See :ref:`flake8-config`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/flake8.pyproject.toml`

   .. index:: 
      triple: utilities; formatters; isort
      triple: utilities; lint; formatters

   .. rubric:: isort

   * MUST show differences (``--diff``)
   * MUST run in check mode (``--check``)
   * MUST skip :term:`stubfiles` (``--skip-glob *.pyi``)
   * MUST target ``@project_name@``

   .. dropdown:: arguments
      :icon: terminal

      .. only:: latex

         See :ref:`isort-args`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/isort.meson.options`

   .. dropdown:: configuration
      :icon: package

      .. only:: latex

         See :ref:`isort-config`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/isort.pyproject.toml`

   .. index::
      triple: utilities; linters; pylint
      triple: utilities; lint; linters

   .. rubric:: mypy

   * MUST target ``@project_name@`` and ``@test_source@``
   * MUST run in strict mode
   * MUST implicitly reexport modules

   .. dropdown:: arguments
      :icon: terminal

      .. only:: latex

         See :ref:`mypy-args`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/mypy.meson.options`

   .. dropdown:: configuration
      :icon: package

      .. only:: latex

         See :ref:`mypy-config`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/mypy.pyproject.toml`

   .. rubric:: pyright

   .. dropdown:: arguments
      :icon: terminal

      .. only:: latex

         See :ref:`pyright-args`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/pyright.meson.options`

   .. dropdown:: configuration
      :icon: package

      .. only:: latex

         See :ref:`pyright-config`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/pyright.pyproject.toml`

   .. index:: 
      triple: utilities; formatters; readme-renderer
      triple: utilities; lint; formatters

   .. rubric:: readme-renderer

   .. versionadded:: 0.3

   .. dropdown:: arguments
      :icon: terminal

      .. only:: latex

         See :ref:`readme-renderer-args`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/readme-renderer.meson.options`

.. card:: :octicon:`skip;1.5em;sd-text-warning` :emphasis:`OPTIONAL`

|linebreak|

   .. versionadded:: 0.1

   .. rubric:: pylint

   .. dropdown:: configuration
      :icon: package

      .. only:: latex

         See :ref:`pylint-config`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/pylint.pyproject.toml`

   .. index::
      triple: utilities; typecheckers; pyright
      triple: utilities; lint; typecheckers
