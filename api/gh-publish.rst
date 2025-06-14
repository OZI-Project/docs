

=======
publish
=======

Github actions :term:`publish step`

.. seealso::

   `OZI-Project/publish <https://github.com/OZI-Project/publish>`_

Applicable Version
------------------

For security purposes it is always best to use the most recent release tag.

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

create-pull-request
^^^^^^^^^^^^^^^^^^^

Create a pull request on the default branch.

* required: false
* default: false

pull-request-body
^^^^^^^^^^^^^^^^^

Text to use for the pull request body.

* required: false
* default: "Created automatically. Manually close and reopen to enable checks."

|newpage|
