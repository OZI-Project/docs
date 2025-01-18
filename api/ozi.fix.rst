ozi-fix console application
===========================


usage: ozi-fix <options> | <positional arguments>

``ozi-fix`` console application.

positional arguments:

missing (m, mis)
   Check your OZI project for missing files.
source (s, src)
   Create a new Python source in an OZI project.
test (t, tests)
   Create a new Python test in an OZI project.
interactive (i)
   Add missing source and test files to a project interactively.

options:
  -h, --help        show this help message and exit


``ozi-fix missing``
-------------------

usage: ozi-fix missing <options> <output> target

positional arguments:
  target                target OZI project directory

options:
  -h, --help            show this help message and exit
  --update-wrapfile, --no-update-wrapfile
                        Update "subprojects/ozi.wrap" to the latest version of OZI.

output:
  --strict, --no-strict
                        strict mode raises warnings to errors, default: no
  --pretty, --no-pretty
                        output indented JSON, default: no


``ozi-fix source``
------------------

usage: ozi-fix source <options> <output> target

positional arguments:
  target                target OZI project directory

options:
  -h, --help            show this help message and exit
  -a <FILENAME>, --add <FILENAME>
                        add files or directories to a project
  -r <FILENAME>, --remove <FILENAME>
                        remove files or directories from a project
  -c HEADER, --copyright-head HEADER
                        copyright header string
  --update-wrapfile, --no-update-wrapfile
                        Update "subprojects/ozi.wrap" to the latest version of OZI.

output:
  --strict, --no-strict
                        strict mode raises warnings to errors, default: no
  --pretty, --no-pretty
                        output indented JSON, default: no


``ozi-fix test``
----------------

usage: ozi-fix test <options> <output> target

positional arguments:
  target                target OZI project directory

options:
  -h, --help            show this help message and exit
  -a <FILENAME>, --add <FILENAME>
                        add files or directories to a project
  -r <FILENAME>, --remove <FILENAME>
                        remove files or directories from a project
  -c HEADER, --copyright-head HEADER
                        copyright header string
  --update-wrapfile, --no-update-wrapfile
                        Update "subprojects/ozi.wrap" to the latest version of OZI.

output:
  --strict, --no-strict
                        strict mode raises warnings to errors, default: no
  --pretty, --no-pretty
                        output indented JSON, default: no

``ozi-fix interactive``
-----------------------

usage: ozi-fix interactive target

positional arguments:
  target      target OZI project directory

options:
  -h, --help  show this help message and exit
