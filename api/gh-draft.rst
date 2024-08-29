


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
1.9.x         0.2.x
1.10.x        0.2.x
1.11.x-1.20.x 0.3.x
============= =================


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
