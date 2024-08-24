================
tox Environments
================

:term:`tox` is the interface of choice for maintainers of projects
created with OZI. It is also the preferred API for :term:'CI'/:term:`CD`
tools. Library dependencies are installed by an OZI subproject with
:term:`pip` and :term:`pip-compile` or with ``uv`` if a project was
created with ``--enable-uv``, and application dependencies are installed
by an OZI subproject with :term:`pipx`.
OZI's :term:`tox` testenvs are also able to use ``uv`` for faster
dependency resolution.

default
-------

dist
^^^^

Run the OZI distribution and packaging checkpoint.

lint
^^^^

Run the OZI linting and formatting checkpoint.

test
^^^^

Run the OZI testing and coverage checkpoint.

other
-----

fix
^^^

Run ``black``, ``autoflake``, ``isort`` and ``ruff`` with :term:`pipx`.

invoke
^^^^^^

Directly interact with OZI subproject tasks via ``invoke``.

.. seealso::
   :ref:`invoke-tasks`

scm
^^^

Run ``setuptools_scm`` in a virtual environment.
