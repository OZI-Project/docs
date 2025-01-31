.. Copyright 2024 Eden Ross Duff MSc
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

=======================
Specification Templates
=======================

|newpage|

.. _source-init-py:

project_name/\_\_init\_\_.py
----------------------------

.. literalinclude:: assets/ozi_templates/ozi_templates/project.name/__init__.py.j2
    :start-after: -#}

.. _source-meson-build:

project_name/meson.build
------------------------

.. literalinclude:: assets/ozi_templates/ozi_templates/project.name/meson.build.j2
    :start-after: -#}

.. _subprojects-ozi-wrap:

subprojects/ozi.wrap
--------------------

.. literalinclude:: assets/ozi_templates/ozi_templates/ozi.wrap.j2
    :start-after: -#}

.. _gitignore:

.gitignore
----------

.. literalinclude:: assets/ozi_templates/ozi_templates/.gitignore.j2
    :start-after: -#}

.. _license-txt:

LICENSE.txt
-----------

.. literalinclude:: assets/ozi_templates/ozi_templates/LICENSE.txt.j2
    :start-after: -#}

.. _readme-md:

README.md
---------

.. literalinclude:: assets/ozi_templates/ozi_templates/README.md.j2
    :start-after: -#}

.. _readme-rst:

README.rst
----------

.. literalinclude:: assets/ozi_templates/ozi_templates/README.rst.j2
    :start-after: -#}

.. _readme-txt:

README.txt
----------

.. literalinclude:: assets/ozi_templates/ozi_templates/README.txt.j2
    :start-after: -#}

.. _requirements-in:

requirements.in
---------------

.. literalinclude:: assets/ozi_templates/ozi_templates/requirements.in.j2
    :start-after: -#}

.. _meson-build:

meson.build
-----------

.. literalinclude:: assets/ozi_templates/ozi_templates/project.meson.build
    :start-after: -#}

.. _meson-options:

meson.options
-------------

.. literalinclude:: assets/ozi_templates/ozi_templates/project.feature.meson.options
    :language: meson
    :start-after: -#}

.. literalinclude:: assets/ozi_templates/ozi_templates/project.integer.meson.options
    :language: meson
    :start-after: -#}

.. literalinclude:: assets/ozi_templates/ozi_templates/project.array.meson.options
    :start-after: -#}

.. _bandit-args:

.. rubric:: meson.options:bandit-args

.. literalinclude:: assets/ozi_templates/ozi_templates/bandit.meson.options
    :language: meson
    :start-after: -#}

.. _black-args:

.. rubric:: meson.options:black-args

.. literalinclude:: assets/ozi_templates/ozi_templates/black.meson.options
    :language: meson
    :start-after: -#}

.. _readme-renderer-args:

.. rubric:: meson.options:readme-renderer-args

.. literalinclude:: assets/ozi_templates/ozi_templates/readme-renderer.meson.options
    :language: meson
    :start-after: -#}

.. _flake8-args:

.. rubric:: meson.options:flake8-args

.. literalinclude:: assets/ozi_templates/ozi_templates/flake8.meson.options
    :language: meson
    :start-after: -#}

.. _isort-args:

.. rubric:: meson.options:isort-args

.. literalinclude:: assets/ozi_templates/ozi_templates/isort.meson.options
    :language: meson
    :start-after: -#}

.. _mypy-args:

.. rubric:: meson.options:mypy-args

.. literalinclude:: assets/ozi_templates/ozi_templates/mypy.meson.options
    :language: meson
    :start-after: -#}

.. _pyright-args:

.. rubric:: meson.options:pyright-args

.. literalinclude:: assets/ozi_templates/ozi_templates/pyright.meson.options
    :language: meson
    :start-after: -#}

.. _pytest-args:

.. rubric:: meson.options:pytest-args

.. literalinclude:: assets/ozi_templates/ozi_templates/pytest.meson.options
    :start-after: -#}

.. _pkg-info:

PKG-INFO
--------

.. literalinclude:: assets/ozi_templates/ozi_templates/project.PKG-INFO
    :start-after: -#}

.. _pyproject-toml:

pyproject.toml
--------------

.. literalinclude:: assets/ozi_templates/ozi_templates/root.pyproject.toml
    :start-after: -#}

.. _setuptools_scm-config:

.. rubric:: pyproject.toml:setuptools_scm

.. literalinclude:: assets/ozi_templates/ozi_templates/setuptools_scm.pyproject.toml
    :start-after: -#}

.. _tox-config:

.. rubric:: pyproject.toml:tox

.. literalinclude:: assets/ozi_templates/ozi_templates/tox.pyproject.toml
    :start-after: -#}

.. _semantic_release-config:

.. rubric:: pyproject.toml:semantic_release

.. literalinclude:: assets/ozi_templates/ozi_templates/semantic_release.pyproject.toml
    :start-after: -#}

.. _cibuildwheel-config:

.. rubric:: pyproject.toml:cibuildwheel

.. literalinclude:: assets/ozi_templates/ozi_templates/cibuildwheel.pyproject.toml
    :start-after: -#}

.. _bandit-config:

.. rubric:: pyproject.toml:bandit

.. literalinclude:: assets/ozi_templates/ozi_templates/bandit.pyproject.toml
    :start-after: -#}

.. _black-config:

.. rubric:: pyproject.toml:black

.. literalinclude:: assets/ozi_templates/ozi_templates/black.pyproject.toml
    :start-after: -#}

.. _flake8-config:

.. rubric:: pyproject.toml:flake8

.. literalinclude:: assets/ozi_templates/ozi_templates/flake8.pyproject.toml
    :start-after: -#}

.. _isort-config:

.. rubric:: pyproject.toml:isort

.. literalinclude:: assets/ozi_templates/ozi_templates/isort.pyproject.toml
    :start-after: -#}

.. _mypy-config:

.. rubric:: pyproject.toml:mypy

.. literalinclude:: assets/ozi_templates/ozi_templates/mypy.pyproject.toml
    :start-after: -#}

.. _pyright-config:

.. rubric:: pyproject.toml:pyright

.. literalinclude:: assets/ozi_templates/ozi_templates/pyright.pyproject.toml
    :start-after: -#}

.. _pylint-config:

.. rubric:: pyproject.toml:pylint

.. literalinclude:: assets/ozi_templates/ozi_templates/pylint.pyproject.toml
    :start-after: -#}

.. _coverage-config:

.. rubric:: pyproject.toml:coverage

.. literalinclude:: assets/ozi_templates/ozi_templates/coverage.pyproject.toml
    :start-after: -#}

.. _pytest-config:

.. rubric:: pyproject.toml:pytest

.. literalinclude:: assets/ozi_templates/ozi_templates/pytest.pyproject.toml
    :start-after: -#}

