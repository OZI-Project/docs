.. include:: latex-tools.rst

=======
release
=======

Applicable Version
------------------

====== ========
OZI    releases
====== ========
1.9.x  \>=0.5.10,<0.6.0
1.10.x \>=0.5.10,<0.6.0
====== ========


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

|newpage|
