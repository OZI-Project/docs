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

〽️ dist
^^^^^^^^

.. dropdown:: REQUIRED
   :open:

   .. rubric:: pyc_wheel

   .. seealso:: 

      :ref:`REQUIRED semantic-release`

   .. _REQUIRED semantic-release:

   .. rubric:: semantic-release

   .. dropdown:: REQUIRED project configuration
      :open:

      .. code-block:: toml
         :caption: pyproject.toml

         branch = "main"
         build_command = """
         git stash && \
         python -m build -w && \
         git stash -- PKG-INFO && \
         python -m pyc_wheel dist/*.whl && \
         meson setup dist/build && \
         git stash drop && \
         git add PKG-INFO && \
         git commit PKG-INFO -m \"PKG-INFO Updated\" && \
         meson dist -C dist/build --formats gztar --no-tests --allow-dirty && \
         sigstore sign dist/*.whl dist/build/meson-dist/*.tar.gz && \
         git stash pop && \
         git add CHANGELOG.md && \
         git stash clear"""
         changelog_file = "CHANGELOG.md"
         changelog_placeholder = "<!--next-version-placeholder-->"
         commit_version_number = true
         dist_glob_patterns = "*.dist-info,*.whl,build/meson-dist/*.tar.gz"

   .. rubric:: sigstore

   .. seealso::

      :ref:`REQUIRED semantic-release`

