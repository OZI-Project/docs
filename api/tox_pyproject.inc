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

.. code-block:: toml
   :caption: pyproject.toml

   [tool.tox]
   legacy_tox_ini = """
   [tox]
   skipsdist = True
   envlist = py{39,310-type,311}-toml

   [gh]
   python =
      3.11 = py311
      3.10 = py310, toml, type
      3.9 = py39, toml

   [testenv]
   package = wheel
   deps =
      meson >= 1.1.0
      setuptools_scm[toml]>=6.2
      toml: tomli >= 2.0.0
   commands =
      meson setup build-{envname} -Ddev=enabled --reconfigure
      meson test --maxfail=1 -C build-{envname} {posargs}
   """