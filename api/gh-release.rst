.. include:: latex-tools.rst

|newpage|

=======
release
=======

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

\>=0.5.10,<0.6.0 releases

Inputs
------

python-dist
^^^^^^^^^^^

Python dist version string e.g. bugfix1, bugfix2, security, prerelease

* required: true

github-token
^^^^^^^^^^^^

GitHub workflow-generated token

* required: true

tag
^^^

The release tag name.

* required: true

Outputs
-------

hashes
^^^^^^

The release file hashes for provenance.

Side-effects
------------

* Creates a security, bugfix2, and bugfix1 wheel release file
* Creates a tarball release file during bugfix1
* Optionally creates a prerelease wheel release file
