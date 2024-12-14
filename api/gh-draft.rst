


=====
draft
=====

Github actions :term:`draft step`

.. seealso::

   `OZI-Project/draft <https://github.com/OZI-Project/draft>`_

Applicable Version
------------------

============= =================
OZI           OZI-Project/draft
============= =================
1.22          1.0 - 1.2
1.23          1.3 - 1.4
1.24          1.4
1.25-1.26     1.5
1.27          1.6
============= =================

Dependencies
------------

* actions/checkout
* actions/upload-artifact
* python-semantic-release/python-semantic-release


Inputs
------

github-token
^^^^^^^^^^^^

GitHub workflow-generated token.

* required: true

Outputs
-------

drafted
^^^^^^^

A release has been drafted.

tag
^^^

The release tag name.

Side-effects
------------

* Creates a new tag commit if semantic-release determines one is needed.
* Creates an artifact of the repo in the tagged state for the first
  release step (security2).

.. versionchanged:: 0.3

   Previously stated that a "security" artifact is created.

|newpage|
