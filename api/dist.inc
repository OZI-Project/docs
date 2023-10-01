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
.. _dist:

dist
^^^^

.. card:: :octicon:`tasklist;1.5em;sd-text-info` REQUIRED

   .. versionadded:: 0.1

   .. rubric:: pyc_wheel

   .. dropdown:: Github actions
      :icon: workflow

      .. literalinclude:: assets/ozi/ozi/templates/github_workflows/pyc_wheel.yml.j2

   .. card:: See also
      :class-card: seealso

      :ref:`REQUIRED semantic-release`

      :octicon:`alert;1em;sd-text-warning` External
         pyc_wheel_

   .. _REQUIRED semantic-release:

   .. rubric:: semantic-release
   
   .. dropdown:: specification
      :icon: info

      Follow the :doc:`semantic_release:algorithm` for release automation.

   .. dropdown:: Github actions
      :icon: workflow

      .. literalinclude:: assets/ozi/ozi/templates/github_workflows/semantic_release.yml.j2

   .. dropdown:: configuration
      :icon: package

      .. literalinclude:: assets/ozi/ozi/templates/semantic_release.pyproject.toml

   .. rubric:: sigstore

   .. dropdown:: Github actions
      :icon: workflow

      .. literalinclude:: assets/ozi/ozi/templates/github_workflows/sigstore.yml.j2

   .. card:: See also
      :class-card: seealso

      :ref:`REQUIRED semantic-release`
      
      :octicon:`alert;1em;sd-text-warning` External
         sigstore_

         sigstore-python_