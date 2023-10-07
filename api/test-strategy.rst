=============
Test Strategy
=============

.. article-info::
   :author: Ross J. Duff MSc (adapted from UK Hydrographic Office materials under an MIT license)
   :avatar: assets/100-percent-human-badge.png
   :avatar-link: https://no-ai-icon.com/statement/?url=docs.oziproject.dev
   :class-avatar: invert:dark
   :date: 25-Sep-2023
   :read-time: 15 min read
   :class-container: sd-p-2 sd-outline-muted sd-rounded-1

This strategy details how we add value through testing. Our teams adhere to this strategy when deciding their approach to testing, creating a Test Approach document for their current project.

Our core principles are:

* Test early and Often by adopting a `Shift Left test methodology <https://smartbear.com/learn/automated-testing/shifting-left-in-testing/>`_
* Use automation whenever possible

Methods Of Testing
------------------

This section will cover the three core methods of testing utilised with key points for each.

Automated
^^^^^^^^^

Automation must be used when possible.

* Use ``hypothesis codegen`` to create fuzz tests.
* Use Meson tests to connect and verify utilities for linting, formatting, unit testing, packaging, and distribution.

We suggest that all teams using automation should adhere to these principles:

* New functionality must be covered by passing automated tests (unless there is a legitimate reason not to).
* All tests should be independent of each other.

Manual Scripted
^^^^^^^^^^^^^^^

* Manual scripted testing should only be used when automation is not deemed the best approach (e.g. too costly, not feasible, not applicable).
* Tests will be created using appropriate test design techniques, e.g. risk based, decision tables, boundary values analysis.
* The team will decide on where these manual tests will be stored and maintained

Test Types
^^^^^^^^^^

This section outlines the test types that need to be considered when preparing a Test Approach for a team's current project.

Accessibility
^^^^^^^^^^^^^

* Testing to ensure the product(s) are accessible to those with disabilities, such as vision impairment, hearing disabilities, and other physical or cognitive conditions.
* Accessibility needs to be considered early and throughout the development process.
* More details can be found on our `accessibility testing <accessibility-testing.rst>`_ page.

API Contract
^^^^^^^^^^^^

* Contract testing should be considered when developing an API that will communicate with another API.

Cross Browser
^^^^^^^^^^^^^

* The team should define and document the browser (and device if mobile testing is required) requirements.
* This requirement should be considered as early as possible by the team.
* As a minimum, browser testing should be carried out on the latest version of Chrome.
* If multiple browsers need to be tested then work closely with the Test Leads and Product Owner to ensure the correct approach is taken.
* More details can be found on the `browser automation <browser-automation.rst>`_ page.

Infrastructure
^^^^^^^^^^^^^^

* This could include the following, but is not limited to:
  * Unit and script validation
  * Integration
  * End-to-End
  
Mobile/Device
^^^^^^^^^^^^^

* This is to include
  * Operating systems
  * Manufacturer
  
Deployment
^^^^^^^^^^

* This could include:
  * Pester tests to validate the environment is as expected.
  * Smoke and/or regression tests to ensure the product(s) are working in the environment as expected.

Disaster Recovery
^^^^^^^^^^^^^^^^^

The disaster recovery plan should be tested for a new or significantly changed system.  This will normally consist of a drill, whereby the disaster scenario(s) are simulated, and the written disaster recovery plan is followed.  This is to verify:

* the plan is complete and accurate, and following it leads to a fully recovered and functional system.
* the Recovery Time Objectives and Recovery Point Objectives are met by following the plan

End-To-End
^^^^^^^^^^

* Testing to ensure the application is performing as designed and expected from start to finish, simulating end user journeys.

Performance
^^^^^^^^^^^

* The purpose of performance testing is to determine how the product performs (stability and responsiveness) under specified conditions.
* The requirements for performance testing should be considered from the outset of the project and recorded as part of the Non-Functional Requirements.  
* [This checklist](performance-test-checklist.md) should be used to guide performance testing activities.

Production
^^^^^^^^^^

* Ensuring products delivered are up and behaving as expected is a key aspect of ongoing support and maintenance; this can be achieved via continuous testing and monitoring.

Safety
^^^^^^

* Safety assurance is part of our core software engineering processes (ensuring our products are safe for the end user).
* We are working to adopt `IEC 61508-3:2010 <https://fdocuments.in/document/iec-61508-6.html>`_ as our safety standard.
* Safety is the responsibility of the whole team and is championed by the Test Engineer.
* More details can be found on on the [safety assurance](safety-assurance-guidance.md) page.

Security
^^^^^^^^

* Testing to ensure security should take place throughout development.
* A key output of the Threat Modelling process is Test Scenarios to confirm the identified vulnerability has not been exposed.

User Acceptance
^^^^^^^^^^^^^^^

* The team should involve users throughout the development process to ensure the developed product satisfies their requirements.
