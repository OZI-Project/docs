.. include:: latex-tools.rst

==========
checkpoint
==========

Applicable Version
------------------

0.4.x releases

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
