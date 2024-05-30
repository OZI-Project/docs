.. include:: latex-tools.rst

OZI.build package
=================

|begin-flushright|

.. article-info::
   :author: Thibault Saunier (Adapted from mesonpep517 docs by Eden Ross Duff)
   :date: 11-May-2024
   :read-time: 45 min read
   :class-container: sd-p-2 sd-outline-muted sd-rounded-1

|end-flushright|

.. dropdown:: License Notice
   :icon: law

   .. compound::

      Licensed under the Apache License, Version 2.0 (the "License");
      you may not use this file except in compliance with the License.
      You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0

      OZI.build also vendors :program:`pyc_wheel`:

      Copyright (c) 2016 Grant Patten <grant@gpatten.com>

      Copyright (c) 2019-2021 Adam Karpierz <adam@karpierz.net>

      Permission is hereby granted, free of charge, to any person obtaining a
      copy of this software and associated documentation files
      (the "Software"), to deal in the Software without restriction,
      including without limitation the rights to use, copy, modify, merge,
      publish, distribute, sublicense, and/or sell copies of the Software,
      and to permit persons to whom the Software is furnished to do so,
      subject to the following conditions:

      The above copyright notice and this permission notice shall be included
      in all copies or substantial portions of the Software.

      THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
      EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
      MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
      IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
      CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
      TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
      SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

|newpage|

This is a python module that implements :pep:`517` for the meson build system.

This implies that any project that deals with python code can easily distributed
to the `Python Package Index (PyPI) <https://pypi.org/>`_ by just setting the right
:term:`metadata` in its :file:`pyproject.toml` config file, per :pep:`518`.

meson: https://mesonbuild.com

Usage
-----

``OZI.build`` doesn't provide any command line tools and should be used
though other standard tools like `pip <https://pip.pypa.io/en/stable/>`_,
`twine <https://pypi.org/project/twine/>`_ and `build <https://pypi.org/project/build/>`_.

Workflow to upload a release to PyPI
------------------------------------

1. Add a :file:`pyproject.toml` to your project
2. Install build: ``pip3 install build``
3. Build packages: ``python3 -m build`` (which adds the sdist and wheel to
   the :file:`dist/` folder)
4. Publish the package ``twine upload dist/*``


In short for the next release:

``rm dist/* && python3 -m build && twine upload dist/*``

The pyproject.toml config file
------------------------------

This file lives at the root of the module/package, at the same place
as the toplevel :file:`meson.build` file.

Build system section
^^^^^^^^^^^^^^^^^^^^

This tells tools like pip to build your project with the OZI.build backend.
The :term:`build backend` is a standard defined by PEP 517.
For any project using OZI.build, it will look like this:

.. code-block:: toml

   [build-system]
   requires = ["OZI.build"]
   build-backend = "ozi_build.buildapi"


Metadata section
^^^^^^^^^^^^^^^^

.. note::
   The project version and name are extracted from the :file:`meson.build`
   `project() <http://mesonbuild.com/Reference-manual.html#project>`_ section.

This section is called ``[tool.ozi-build.metadata]`` in the file.

``author``
""""""""""

Your name

``author-email``
""""""""""""""""

Your email address

e.g. for OZI.build itself:

.. code-block:: toml

   [tool.ozi-build.metadata]
   author="Thibault Saunier"
   author-email="tsaunier@gnome.org"

``classifiers``
"""""""""""""""

A list of `classifiers <https://pypi.python.org/pypi?%3Aaction=list_classifiers>`_.

``description``
"""""""""""""""

The description of the project as a string if you do not want to specify
'description-file'

``description-file``
""""""""""""""""""""

A path (relative to the .toml file) to a file containing a longer description
of your package to show on :term:`PyPI`. This should be written in
reStructuredText Markdown or plain text, and the filename should have the
appropriate extension (`.rst`, `.md` or `.txt`).

``home-page``
"""""""""""""

A string containing the URL for the package's home page.

Example:

`http://www.example.com/~cschultz/bvote/`

``license``
"""""""""""

Text indicating the license covering the distribution. This text can be either a valid license expression as defined in [pep639](https://www.python.org/dev/peps/pep-0639/#id88) or any free text.

``maintainer``
""""""""""""""

Name of current maintainer of the project (if different from author)

``maintainer-email``
""""""""""""""""""""

Maintainer email address

Example:

.. code-block:: toml

   [tool.ozi-build.metadata]
   maintainer="Robin Goode"
   maintainer-email="rgoode@example.org"

``meson-options``
"""""""""""""""""

A list of default :term:`meson options` to set, can be overriden and
expanded through the :envvar:`MESON_ARGS`
environment variable at build time.

``meson-python-option-name``
""""""""""""""""""""""""""""

The name of the :term:`meson options` that is used in the meson build definition
to set the python installation when using
`python.find_installation() <http://mesonbuild.com/Python-module.html#find_installation>`_.

``module``
""""""""""

The name of the module, will use the meson project name if not specified

``pkg-info-file``
"""""""""""""""""

Pass a PKG-INFO file direcly usable.

.. note:: All other keys will be ignored if you pass an already prepared `PKG-INFO` file


``platforms``
"""""""""""""

Supported Python platforms, can be 'any', py3, etc...

``project-urls``
""""""""""""""""

A list of ``Type, url`` as described in the
`pep345 <https://www.python.org/dev/peps/pep-0345/#project-url-multiple-use>`_.
For example:

.. code-block:: toml

   project-urls = [
      "Source, https://gitlab.com/OZI-Project/OZI.build",
   ]

``requires``
""""""""""""

A list of other packages from :term:`PyPI` that this package needs. Each package may
be followed by a version specifier like ``(>=4.1)`` or ``>=4.1``, and/or an
`environment marker <https://www.python.org/dev/peps/pep-0345/#environment-markers>`_
after a semicolon. For example:

.. code-block:: toml

   requires = [
     "requests >=2.6",
     "configparser; python_version == '2.7'",
   ]

``requires-python``
"""""""""""""""""""

A version specifier for the versions of Python this requires, e.g. ``~=3.3`` or
``>=3.3,<4`` which are equivalents.

.. note:: Setting ``requires-python`` overrides compiliation of :file:`*.py` to :file:`*.pyc` in wheels.

``summary``
"""""""""""

A one sentence summary about the package


Entry points section (Optional)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

You can declare :term:`entry points` in the ``[tools.ozi-build.entry-points]``
section.
It is a list of
``entrypointname = module:funcname`` strings, for example for console
scripts entry points:

.. code-block:: toml

   [tool.ozi-build.entry-points]
   console_scripts = [
     'otioview = opentimelineview.console:main',
     'otiocat = opentimelineio.console.otiocat:main',
     'otioconvert = opentimelineio.console.otioconvert:main',
     'otiostat = opentimelineio.console.otiostat:main',
     'otioautogen_serialized_schema_docs = opentimelineio.console.autogen_serialized_datamodel:main',
   ]
