===================
Meson Build Options
===================

Configuration options listing for the meson build step in an
OZI-created project.
These are located in a project's :file:`meson.options`.

Feature
-------

The value of these options toggle between ``auto``, ``enabled``, and
``disabled``.

install-subprojects
^^^^^^^^^^^^^^^^^^^

Install all subprojects as python packages, excluding ``ozi``.

ozi:dev
^^^^^^^

All utilities, implies ``ozi:dist``, ``ozi:lint``, and ``ozi:test``.

ozi:dist
^^^^^^^^

Utilities for distribution and supply chain integration.

ozi:lint
^^^^^^^^

Utilities for linting and formatting code.

ozi:test
^^^^^^^^

Utilities for testing code.

Array
-----

compile-requirements-command
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The default command snippet to use when resolving dependencies for
:term:`utility application` python packages.

install-requirements-command
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The default command snippet to use when installing :term:`utility application`
python packages.

\(*utility-name*\)-args
^^^^^^^^^^^^^^^^^^^^^^^

Arguments to use when calling a :term:`utility application` or module-only.

ozi:should-fail
^^^^^^^^^^^^^^^

:term:`Utility applications` that expect a non-zero exit state.

ozi:module-only
^^^^^^^^^^^^^^^

:term:`Utility applications` that are called, as python modules,
with arguments by ``meson test``.

ozi:plugin-only
^^^^^^^^^^^^^^^

:term:`Utility applications` that are not called with arguments by
``meson test``. OZI will not look for a ozi:\(*utility-name*\)-args option.

ozi:tox-env-dir
^^^^^^^^^^^^^^^

This option is required to be able to use the tox environment as the
meson build directory.

ozi:\(*suite-name*\)-suite
^^^^^^^^^^^^^^^^^^^^^^^^^^

All :term:`Utility applications`.

ozi:\(*utility-name*\)-config-args
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Arguments to the ``compile-requirements-command``.

ozi:\(*utility-name*\)-install-args
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Arguments to the ``install-requirements-command``.

Integer
-------

\(*suite-name*\)-priority
^^^^^^^^^^^^^^^^^^^^^^^^^

Priority of each utility suite.

\(*suite-name*\)-timeout-multiplier
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Timeout multiplier of each utility suite.
