
.. include:: latex-tools.rst

=====
draft
=====

Applicable Version
------------------

===== ========
OZI   releases
===== ========
1.9   0.2.x
1.10  0.2.x
===== ========


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
  release step (security).

|newpage|
