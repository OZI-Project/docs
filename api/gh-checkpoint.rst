

==========
checkpoint
==========

Github actions :term:`checkpoint step`

.. seealso::

   `OZI-Project/checkpoint <https://github.com/OZI-Project/checkpoint>`_

Applicable Version
------------------

====== ======================
OZI    OZI-Project/checkpoint
====== ======================
1.9.x  0.3.x
1.10.x 0.4.x
1.11.x 0.4.x
====== ======================

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

args
^^^^

posargs for tox.

* required: false
* default: ""

|newpage|
