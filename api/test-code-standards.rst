

=========================
Test Automation Standards
=========================

|begin-flushright|

.. article-info::
   :author: Eden Ross Duff MSc (adapted from UK Hydrographic Office materials under an MIT license)
   :date: 25-Sep-2023
   :read-time: 10 min read
   :class-container: sd-p-2 sd-outline-muted sd-rounded-1

|end-flushright|

.. dropdown:: License Notice
   :icon: law

   | Copyright (c) 2021 UK Hydrographic Office

   Permission is hereby granted, free of charge, to any person obtaining a
   copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation
   the rights to use, copy, modify, merge, publish, distribute, sublicense,
   and/or sell copies of the Software, and to permit persons to whom the
   Software is furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
   OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
   THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
   DEALINGS IN THE SOFTWARE.

|newpage|

Python & Meson
--------------

* Test Automation code should adhere to the same standard as production code
* Formatting standards should reflect our own specification.
* Standard coding principles apply (e.g. SOLID, DRY)

Unit Testing
------------

* Aim for naming consistency. Common standard is to use a When-Then name,
  for example, WhenTwoItemsExistsThenBothItemsAreReturned
* Follow best practice:
   * Tests for results not functionality
   * One assertion per test
   * Tests should be isolated, i.e. have no dependencies on other tests
     order of execution

API Testing
-----------

* Perform full happy/unhappy path tests at this level
* Interactions with APIs should be abstracted into a separate
  service/facade, not alongside the test code

UI Testing
----------

* Only use for e2e tests or explicit UI features at this level
* Interactions with UIs should be abstracted into a separate service/facade,
  not alongside the test code (e.g., Page Object Model)

Test and Defect Management
--------------------------

* For Python projects, e2e tests should be separate project.
* Open defects should be managed; a regular team/project review session
  is recommended

|newpage|
