===========
Test Policy
===========

.. article-info::
   :author: Ross J. Duff MSc (adapted from UK Hydrographic Office materials under an MIT license)
   :avatar: assets/100-percent-human-badge.png
   :avatar-link: https://no-ai-icon.com/statement/?url=docs.oziproject.dev
   :class-avatar: sd-avatar-md
   :date: 25-Sep-2023
   :read-time: 5 min read
   :class-container: sd-p-2 sd-outline-muted sd-rounded-1

The purpose of this document is to communicate the policy for testing of new and updated software,

Our goals for testing
---------------------

* To ensure our safety-related systems do not cause inaccuracy or delay to our products
* To ensure our software maintains the good reputation of the organisation
* To support our agile processes, allowing frequent releases containing valuable changes to our users
* To spend our time on the most valuable testing activities
* Add regression tests to an automated test suite for at least 50% of the bugs fixed within the last six months.

Scope of testing
----------------

Our testing covers functional and non-functional areas as described in our `strategy <test-strategy.rst>`_.

Who tests
---------

The Test Practice consists of a group of test engineers who provide a testing capability across software delivery teams.  It also provides oversight of the testing activities of our delivery partners.

Who manages Testing
-------------------

OZI committers are task-managed by the Project Lead.

The Testing Life-Cycle
----------------------

In summary, a standard Test Approach document must be written at the start of developing the Beta product, and a Test Summary Report must be created and signed off by stakeholders before the Beta is released.

Testing Processes
-----------------

Test processes may differ by team or project, according to individual circumstances.  All test approaches must conform to the `test strategy <test-strategy.rst>`_.

Test data
---------

It is policy that live data should not be used for testing. Where a copy of live data is used then its use is to be risk assessed and the data sanitised as appropriate, removing references to customers, employees, personal identifying information, and corporate proprietary information.
