

===========
Test Policy
===========

|begin-flushright|

.. article-info::
   :author: Eden Ross Duff MSc (adapted from UK Hydrographic Office materials under an MIT license)
   :date: 25-Sep-2023
   :read-time: 5 min read
   :class-container: sd-p-2 sd-outline-muted sd-rounded-1

|end-flushright|

.. dropdown:: License Notice
   :icon: law

   Copyright (c) 2021 UK Hydrographic Office

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

The purpose of this document is to communicate the policy for testing of
new and updated software,

Our goals for testing
---------------------

* To ensure our safety-related systems do not cause inaccuracy or delay
  to our products
* To ensure our software maintains the good reputation of the organisation
* To support our processes, allowing frequent releases containing valuable
  changes to our users
* To spend our time on the most valuable testing activities
* Add regression tests to an automated test suite for at least 50% of
  the bugs fixed within the last six months.

Scope of testing
----------------

Our testing covers functional and non-functional areas as described in our `strategy <test-strategy.rst>`_.

Who tests
---------

OZI commiters and maintainers

Who manages Testing
-------------------

OZI committers are task-managed by the Project Lead and maintainers.

The Testing Life-Cycle
----------------------

In summary, a standard Test Approach document must be written at the
start of developing the Beta product, and a Test Summary Report
must be created and signed off by stakeholders before the Beta is released.

Testing Processes
-----------------

Test processes may differ by team or project, according to individual circumstances.  All test approaches must conform to the `test strategy <test-strategy.rst>`_.

Test data
---------

It is policy that live data should not be used for testing.
Where a copy of live data is used then its use is to be risk assessed
and the data sanitised as appropriate, removing references to customers,
employees, personal identifying information, and corporate proprietary
information.

|newpage|
