

==========
checkpoint
==========

Github actions :term:`checkpoint step`

.. seealso::

   `OZI-Project/checkpoint <https://github.com/OZI-Project/checkpoint>`_

Applicable Version
------------------

For security purposes it is always best to use the most recent release tag.

Dependencies
------------

* actions/checkout
* actions/setup-python
* actions/upload-artifact
* sigstore/gh-action-sigstore-python

Inputs
------

python-version
^^^^^^^^^^^^^^

Python version to checkpoint.

* required: true

parallel
^^^^^^^^

Whether to run checkpoints in parallel.

* required: true
* default: "true"

os
^^

Operating system to run on.

* required: false
* default: "ubuntu-latest"

submodules
^^^^^^^^^^

.. versionadded:: 1.6

Whether to fetch git submodules.

* required: false
* default: ""
  
freethreaded
^^^^^^^^^^^^

.. versionadded:: 1.7

Enable freethreaded Python when available.

* required: false
* default: false

args
^^^^

posargs for tox.

* required: false
* default: ""

|newpage|
