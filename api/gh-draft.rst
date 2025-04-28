


=====
draft
=====

Github actions :term:`draft step`

.. seealso::

   `OZI-Project/draft <https://github.com/OZI-Project/draft>`_

Applicable Version
------------------

For security purposes it is always best to use the most recent release tag.


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

checkout-submodules
^^^^^^^^^^^^^^^^^^^

.. versionadded:: 1.8

Whether to checkout submodules as well. true, false, or recursive.

* required: false
* default: true

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
