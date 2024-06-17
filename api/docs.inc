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
.. _docs:

docs
^^^^

.. card:: :octicon:`skip;1.5em;sd-text-warning` OPTIONAL

   .. raw:: latex

      \linebreak

   .. versionadded:: 0.1

   .. rubric:: doc8

   .. dropdown:: specification
      :icon: info

      * MUST ignore D000 and D002

   .. dropdown:: configuration
      :icon: package

      .. literalinclude:: assets/ozi_templates/ozi_templates/doc8.pyproject.toml
         :start-after: -#}

   .. dropdown:: arguments
      :icon: terminal

      .. literalinclude:: assets/ozi_templates/ozi_templates/doc8.meson.options
         :start-after: -#}

   .. rubric:: pydocstyle

   .. dropdown:: specification
      :icon: info

      * MUST run in verbose mode (``-v``)
      * MUST run in debug mode (``-d``)
      * MUST add ``--config=pyproject.toml``
      * MUST target ``docs_source``

   .. dropdown:: arguments
      :icon: terminal

      .. literalinclude:: assets/ozi_templates/ozi_templates/pydocstyle.meson.options
         :start-after: -#}

   .. rubric:: sphinx-build(sphinx)

   .. dropdown:: plugins
      :icon: plug

      * sphinx-design
      * sphinxawesome-linter
      * sphinxawesome-theme
