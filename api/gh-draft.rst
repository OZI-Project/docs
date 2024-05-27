
.. include:: latex-tools.rst

=====
draft
=====

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
