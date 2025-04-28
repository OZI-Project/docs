

=======
release
=======

Github actions :term:`release step`

.. seealso::

   `OZI-Project/release <https://github.com/OZI-Project/release>`_

Applicable Version
------------------

For security purposes it is always best to use the most recent release tag.

Dependencies
------------

* actions/download-artifact
* actions/setup-python
* actions/upload-artifact
* sigstore/gh-action-sigstore-python

Inputs
------

python-dist
^^^^^^^^^^^

Python dist version string e.g. security2, security1, bugfix, prerelease

.. versionchanged:: 0.6
   previously stated "... bugfix, bugfix1, security ..."

* required: true

github-token
^^^^^^^^^^^^

GitHub workflow-generated token

* required: true

freethreaded
^^^^^^^^^^^^

.. versionadded:: 1.6

Enable freethreaded python builds when applicable (Python >= 3.13)"

* required: false
* default: false

Outputs
-------

hashes
^^^^^^

The release file hashes for provenance.

Side-effects
------------

* Creates releases in the order security2, security1, bugfix,
  and optionally prerelease using a shared artifact.

* Each ``python-dist`` expects that a matching named artifact exists,
  created by the previous in succession or for security2 created by the
  :term:`draft step`.

* Creates a security2, security1, and bugfix :term:`wheel` release file

.. versionchanged:: 0.6
   previously stated "... security, bugfix1, and bugfix ..."

* Creates a tarball release file during bugfix

.. versionchanged:: 0.6
    previously stated "... during bugfix1"

* Optionally creates a prerelease :term:`wheel` release file

* Creates a combined artifact with the built package releases.

|newpage|
