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

.. card:: :octicon:`tasklist;1.5em;sd-text-info` :strong:`REQUIRED`

|linebreak|

   :octicon:`alert;1em;sd-text-warning` External

   .. _REQUIRED cibuildwheel:

   .. rubric:: cibuildwheel

   .. versionadded:: 0.6

   .. dropdown:: configuration
      :icon: package

      .. only:: latex

         See :ref:`cibuildwheel-config`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/cibuildwheel.pyproject.toml`

   .. _REQUIRED sigstore:

   .. rubric:: sigstore

   .. versionadded:: 0.6

   configuration not needed

   .. _REQUIRED semantic-release:

   .. rubric:: semantic-release

   .. dropdown:: configuration
      :icon: package

      .. only:: latex

         See :ref:`semantic_release-config`

      .. only:: html

         :download:`assets/ozi_templates/ozi_templates/semantic_release.pyproject.toml`

   .. card:: See also
      :class-card: seealso

      :ref:`REQUIRED semantic-release`

      :octicon:`alert;1em;sd-text-warning` External
         sigstore_

         sigstore-python_
   
   .. _REQUIRED twine:

   .. rubric:: twine

   .. versionadded:: 0.6

   configuration not needed
