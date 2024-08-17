

===============
Project Roadmap
===============

|begin-flushright|

.. article-info::
    :author: Eden Ross Duff MSc
    :date: 04-Sep-2023
    :read-time: 5 min read
    :class-container: sd-p-2 sd-outline-muted sd-rounded-1

|end-flushright|
|newpage|

Completed Milestones
--------------------

Version 0.1
^^^^^^^^^^^

The current milestone version is 0.1, meaning that for OZI to release
version 0.1 the project committers will need to satisfy the OZI
specification.

Alpha Release
^^^^^^^^^^^^^

The current milestone status is Alpha, meaning that for OZI to change the
status from Pre-Alpha to Alpha the committers need to satisfy the OZI
specification.


API Specification: 0.1
^^^^^^^^^^^^^^^^^^^^^^

The spec was developed alongside the Pre-Alpha 0.0.x releases. This means
that we will pin each specification card to a ``.. versionadded:: 0.1`` and
change the ``API Specification: ...`` title here before work begins on an
Alpha release.

API Specification: 0.2
^^^^^^^^^^^^^^^^^^^^^^

These spec changes matured from the pre-1.6 Alpha releases.

* :file:`PKG-INFO` must be rendered from a template in :file:`pyproject.toml`
* Must isolate the semantic-release CI workflow step.

API Specification: 0.3
^^^^^^^^^^^^^^^^^^^^^^

These spec changes matured from the pre-1.7 Alpha releases.

* :file:`README.rst` no longer required.
* :file:`README` now required.
* Support for markdown and plaintext :file:`README`

API Specification: 0.4
^^^^^^^^^^^^^^^^^^^^^^

These spec changes came alongside the pre-1.8 Alpha releases.

* Isolation of all CI :term:`utility applications`, with ``pipx``,
  excluding ``pytest``.

API Specification: 0.5
^^^^^^^^^^^^^^^^^^^^^^

* Added the expectation of ``templates`` and ``subprojects`` folders to the
  spec implementation.

API Specification: 0.6
^^^^^^^^^^^^^^^^^^^^^^

These spec changes came alongside the pre-1.18 Beta releases.

* Added the plugins ``twine`` and ``cibuildwheel`` to the ``dist`` checkpoint.


Test Policy OpenSSF Silver attestations
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

* :octicon:`check;1em;sd-text-info` automated_integration_testing
* :octicon:`check;1em;sd-text-info` regression_tests_added50
* :octicon:`check;1em;sd-text-info` test_policy_mandated

Deprecated Python 3.9 Support
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

On 04-Oct-2023, in keeping with our rolling support policy for Python,
version 3.9 is deprecated as version 3.12 support is deployed.


Deferred Milestones
-------------------

Documentation(docs) utility environment
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The project lead has decided it is best to defer the documentation utility
environment to a later roadmap and specification, ``docs`` has been removed
from the specification pre-0.1 as well as references to it.
Pull requests and volunteers are welcome. A single fulltime maintainer
is currently responsible for the whole of the OZI Project. This effort would
need to be maintained by someone else.

Works in Progress
-----------------

Accessibility Best Practices OpenSSF Silver attestation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Internationalization and Localization OpenSSF Silver attestation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Vulnerability Response Process OpenSSF Silver attestation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^


Help Needed
-----------

Bus Factor OpenSSF Silver attestation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Currently the bus factor is one; just the project lead.

Access Continuity OpenSSF Silver attestation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

We have yet to setup access continuity. When committers are more active in OZI
we will need to create a means of continuity.

|newpage|
