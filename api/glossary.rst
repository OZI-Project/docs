.. _glossary:

Glossary of Terms
=================

.. glossary::

   ambiguous license
      A :term:`PyPI` trove license classifier that OZI cannot match to one
      license template unless given additional information in the form of
      an SPDX license expression.

      .. seealso::

         :pep:`639`

   build backend
      A library that interacts with standardized Python packaging tools to assemble
      a python package.

   checkpoint step
      The OZI standardized :term:`CI` process that runs :term:`utility applications`.

   CD
   continuous deployment
      The process of building, certifying, and publishing an up-to-date software distribution.

   CI
   continuous integration
      The process of building, testing, and integration of code changes.
      When a developer commits code to a shared repository,
      the CI system automatically builds the project, runs tests, and checks for any errors or failures.

   draft step
      The beginning of the :term:`CD` process for OZI after a successful :term:`checkpoint step`.

   entry points
   entry points: console_scripts
   entry points: gui_scripts
      Entry points are a way for installed Python packages to expose a user interface for
      applications. One example is ``console_scripts`` entry points,
      which define shell commands with access to standard input, output, and error streams
      by identifying a Python function to run.

      .. seealso::

         :ref:`setuptools:entry_points`

   meson options
      Confguration options set using the meson command argument :samp:`-D{option}={value}`
      and defined in a project's :file:`meson.options` file.

   metadata
      Information needed by a build backend to build the
      :file:`PKG-INFO`/:file:`METADATA` in a Python software package.

   publish step
      The next step in the :term:`CD` process after the :term:`release step`,
      publishes distribution packages.

   PyPI
   Python Package Index
      The official online repository for Python software packages.

   release step
      The next step in the :term:`CD` process after the :term:`draft step`,
      creates release distribution packages.

   utility
   utility applications
   utility application
   utility program
      Program(s) or Python module(s) with an interface suitable for ``meson test``.

