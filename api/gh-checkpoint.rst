.. include:: latex-tools.rst

==========
checkpoint
==========

|begin-flushright|

.. article-info::
   :author: Eden Ross Duff MSc
   :date: 26-May-2024
   :read-time: 5 min read
   :class-container: sd-p-2 sd-outline-muted sd-rounded-1

|end-flushright|
|newpage|

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
