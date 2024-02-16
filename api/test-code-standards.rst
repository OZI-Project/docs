=========================
Test Automation Standards
=========================

.. article-info::
   :author: Eden Rose Duff MSc (adapted from UK Hydrographic Office materials under an MIT license)
   :date: 25-Sep-2023
   :read-time: 10 min read
   :class-container: sd-p-2 sd-outline-muted sd-rounded-1

.. raw:: latex

    \newpage

Python & Meson
--------------

* Test Automation code should adhere to the same standard as production code
* Formatting standards should reflect standard in use by development teams (e.g. Google Code Standard, Microsoft)
* Standard coding principles apply (e.g. SOLID, DRY)

Unit Testing
------------

* Aim for naming consistency. Common standard is to use a When-Then name, for example, WhenTwoItemsExistsThenBothItemsAreReturned
* Follow best practice:
  * Tests for results not functionality
  * One assertion per test
  * Tests should be isolated, i.e. have no dependencies on other tests nor on order of execution

API Testing
-----------

* Perform full happy/unhappy path tests at this level
* Interactions with APIs should be abstracted into a separate service/facade, not alongside the test code

UI Testing
----------

* Only use for e2e tests or explicit UI features at this level
* Interactions with UIs should be abstracted into a separate service/facade, not alongside the test code (e.g., Page Object Model)

Test and Defect Management
--------------------------

* For Python projects, e2e tests should be separate project.
* Open defects should be managed; a regular team/project review session is recommended 
