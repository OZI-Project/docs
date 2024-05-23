.. include:: latex-tools.rst

OZI package
===========

|begin-flushright|

.. article-info::
   :author: Eden Ross Duff
   :date: 11-May-2024
   :read-time: 80 min read
   :class-container: sd-p-2 sd-outline-muted sd-rounded-1

|end-flushright|
|newpage|


Module contents
---------------

.. automodule:: ozi
   :members:
   :undoc-members:
   :show-inheritance:

ozi console application
-----------------------

.. exec::

   from ozi.__main__ import parser
   parser.print_help()


|newpage|

Submodules
----------

ozi.actions module
------------------

.. automodule:: ozi.actions
   :members:
   :exclude-members: ExactMatch

|newpage|

ozi.comment module
------------------

.. automodule:: ozi.comment
   :members:
   :undoc-members:
   :show-inheritance:

|newpage|

ozi.filter module
-----------------

.. versionchanged:: 1.2
   The module ``filters`` was moved to ``blastpipe.ozi_templates.filters``


ozi.meson module
----------------

.. automodule:: ozi.meson
   :members:
   :undoc-members:
   :show-inheritance:

|newpage|

ozi.render module
-----------------

.. automodule:: ozi.render
   :members:
   :undoc-members:
   :show-inheritance:

.. versionchanged:: 1.2
   The function ``load_environment`` was moved to ``blastpipe.ozi_templates``

|newpage|

ozi.tap module
--------------

.. automodule:: ozi.tap
   :members:
   :undoc-members:
   :show-inheritance:

|newpage|

Subpackages
-----------

.. toctree::
   :maxdepth: 4

   ozi.fix
   ozi.new
   ozi.scripts
   ozi.spec
