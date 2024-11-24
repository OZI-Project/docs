

=======
publish
=======

Github actions :term:`publish step`

.. seealso::

   `OZI-Project/publish <https://github.com/OZI-Project/publish>`_

Applicable Version
------------------

============= ===================
OZI           OZI-Project/publish
============= ===================
1.22.x        1.0.x - 1.2.x
1.23.x        1.3.x - 1.4.x
1.24.x        1.4.x
1.25.x        1.5.x
============= ===================

Dependencies
------------

* actions/download-artifact
* pypa/gh-action-pypi-publish
* python-semantic-release/upload-to-gh-release (1.0.x)
* python-semantic-release/publish-action (1.1.x +)

Inputs
------

github-token
^^^^^^^^^^^^

GitHub workflow-generated token.

* required: true

|newpage|
