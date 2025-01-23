.. _invoke-tasks:

============
Invoke Tasks
============

Invoke tasks are provided for every project created with OZI.

setup
-----

Setup a meson build directory for an OZI suite.

.. code-block:: bash
   :caption: usage

   tox -e invoke -- setup <options>

--suite=SUITE
  Checkpoint suite to setup, one of "dist", "lint", or "test".

checkpoint
----------

Run OZI checkpoint suites with meson test.

.. code-block:: bash
   :caption: usage

   tox -e invoke -- checkpoint <options>

--suite=SUITE
  Checkpoint to run, one of "dist", "lint", or "test".

--maxfail=MAXFAIL
  Maximum allowable failed tests.

sign-checkpoint
---------------

Sign checkpoint suites with sigstore.

.. code-block:: bash
   :caption: usage

   tox -e invoke -- sign-checkpoint <options>

--suite=SUITE
   Checkpoint to sign with sigstore, one of "dist", "lint", or "test".

release
-------

Create releases for the current interpreter.

.. code-block:: bash
   :caption: usage

   tox -e invoke -- release <options>


--sdist, --no-sdist
  Build source distribution tarball.

--draft, --no-draft
  Run semantic-release draft step.

--cibuildwheel, --no-cibuildwheel
  Run cibuildwheel binary build.

--wheel, --no-wheel
  Run wheel binary build.

--sign, --no-sign
  Sign release files with sigstore.

provenance
----------

SLSA provenance currently unavailable in OZI self-hosted CI/CD

.. code-block:: bash
   :caption: usage

   tox -e invoke -- provenance

Currently this is just an empty stub.

publish
-------

Publishes a release tag

.. code-block:: bash
   :caption: usage

   tox -e invoke -- publish

rewrite
-------

Interactive mode entrypoint for meson rewrite.

.. code-block:: bash
   :caption: usage

   tox -e invoke -- rewrite <options>

--command=COMMAND
  JSON string for the meson rewrite tool.


.. seealso::

   :py:mod:`ozi.tasks`
