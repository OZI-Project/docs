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
.. _test:

test
^^^^

.. card:: :octicon:`tasklist;1.5em;sd-text-info` REQUIRED

   .. versionadded:: 0.1

   .. rubric:: coverage

   * MUST target ``project_source``
   * MUST cover 100.0% of statements
   * MUST allow ``pragma: no cover`` and ``pragma: defer to ...``

   .. dropdown:: configuration
      :icon: package

      .. literalinclude:: assets/ozi/ozi/templates/coverage.pyproject.toml

   .. rubric:: hypothesis

   .. seealso::

      :ref:`REQUIRED pytest`

   .. _REQUIRED pytest:

   .. rubric:: pytest

   * MUST target ``project_source``
   * MUST use ``temp/`` as the base directory for temporary test files
   * MUST defer to system for number of workers.

   .. dropdown:: arguments
      :icon: terminal

      .. literalinclude:: assets/ozi/ozi/templates/pytest.meson.options

   .. dropdown:: configuration
      :icon: package

      .. literalinclude:: assets/ozi/ozi/templates/pytest.pyproject.toml

   .. dropdown:: Github workflow
      :icon: workflow

      .. literalinclude:: assets/ozi/ozi/templates/github_workflows/pytest.yml.j2

   .. dropdown:: plugins
      :icon: plugin

      * pytest-asyncio 
      * pytest-cov 
      * pytest-randomly 
      * pytest-tcpclient 
      * pytest-xdist