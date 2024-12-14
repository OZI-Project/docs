

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
1.22          1.0 - 1.2
1.23          1.3 - 1.4
1.24          1.4
1.25-1.26     1.5
1.27          1.6
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
