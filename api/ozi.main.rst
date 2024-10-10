ozi console application
=======================

usage: ozi <options>

``ozi`` console application.

options:
  -h, --help            show this help message and exit
  -v, --version         Print the current version and exit.
  -c, --check-version   Check for a newer version of OZI and exit.
  -e LICENSE_EXPR, --check-license-expr LICENSE_EXPR
                        Validate a SPDX license expression.
  -i, --info            Print all metadata as JSON and exit.
  -l METADATA_FIELD, --list-available METADATA_FIELD
                        Print a list of valid values for a key and exit.

METADATA_FIELD choices:
  | audience
  | environment
  | framework
  | language
  | license
  | license-exception-id
  | license-id
  | status
  | topic

LICENSE_EXPR: :term:`SPDX license expression`
  | See https://spdx.github.io/spdx-spec/v2-draft/SPDX-license-expressions/

project authoring console app:
  | ``ozi-new -h``         show help for the ozi-new command

project maintenance console app:
  | ``ozi-fix -h``         show help for the ozi-fix command

continuous integration checkpoints:
  | ``tox -e lint``        run formatting, static analysis, and type checking
  | ``tox -e test``        run tests and coverage
  | ``tox -e dist``        run distribution and packaging
