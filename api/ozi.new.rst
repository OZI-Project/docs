ozi-new console application
===========================

usage: ozi-new <options> | <positional arguments>

``ozi-new`` console application.

positional arguments:

interactive (i)
   create a new Python project using the interactive prompt
project (p)
   create a new Python project with OZI

options:
  -h, --help       show this help message and exit


.. _ozi-new-project:

``ozi-new project``
-------------------

usage: ozi-new project <options> <required metadata> <optional metadata> <default metadata> <defaults> target

Create a new Python project with OZI.

options:
  -h, --help            show this help message and exit

required metadata:
  -n NAME, --name NAME  Name (use once)
  -a <AUTHOR_NAMES>, --author <AUTHOR_NAMES>
                        Author (use zero or more times, single output)
  -e <AUTHOR_EMAILS>, --author-email <AUTHOR_EMAILS>
                        Author-email (use zero or more times, single output)
  -s SUMMARY, --summary SUMMARY
                        Summary (use once)
  -p HOME_PAGE, --home-page HOME_PAGE
                        Home-page (use once)
  --license-expression LICENSE_EXPRESSION
                        License-Expression (use once, SPDX license expression)
  -l LICENSE, --license LICENSE
                        License (use once)

optional metadata:
  --keywords KEYWORDS   Keywords (use once, comma-delimited list)
  --maintainer <MAINTAINER_NAMES>
                        Maintainer (use zero or more times, single output (if different from author))
  --maintainer-email <MAINTAINER_EMAILS>
                        Maintainer-email (use zero or more times, single output (if different from author email))
  --framework <FRAMEWORK_NAMES>
                        Framework (use zero or more times)
  --project-url <PROJECT_URLS>
                        Project-URL (use zero or more times, comma-separated tuples (name, url))
  --topic <TOPIC_NAMES>
                        Topic (use zero or more times)
  -r <DIST_REQUIRES>, --dist-requires <DIST_REQUIRES>, --requires-dist <DIST_REQUIRES>
                        Requires-Dist (requirements) (use zero or more times)

default metadata:
  --audience <AUDIENCE_NAMES>, --intended-audience <AUDIENCE_NAMES>
                        Intended Audience (use zero or more times) defaults to: <'Other Audience'>
  --typing <PY_TYPED_OR_STUBS>
                        Typing (use zero or more times) defaults to: <'Typed'>
  --environment <ENVIRONMENT_NAMES>
                        Environment (use zero or more times) defaults to: <'Other Environment'>
  --license-file LICENSE_FILENAME
                        License-File (use once) defaults to: LICENSE.txt
  --language <LANGUAGE_NAMES>, --natural-language <LANGUAGE_NAMES>
                        Natural Language (use zero or more times) defaults to: <'English'>
  --status STATUS, --development-status STATUS
                        Status (use zero or more times) defaults to: <'1 - Planning'>
  --long-description-content-type README_TYPE, --readme-type README_TYPE
                        Description-Content-Type (('rst', 'md', 'txt')) defaults to: rst

defaults:
  -c HEADER, --copyright-head HEADER
                        copyright header string
  --ci-provider github  continuous integration and release provider
  --verify-email, --no-verify-email
                        verify deliverability of email domain, default: no
  --update-wrapfile, --no-update-wrapfile
                        Update "subprojects/ozi.wrap" to the latest version of OZI.
  --enable-cython, --no-enable-cython
                        use Cython to build Python extension modules. default: no
  --enable-uv, --no-enable-uv
                        Use uv to compile and install Python requirements, default: no
  --github-harden-runner, --no-github-harden-runner
                        add a harden runner to all non-reusable workflow jobs, default: no
  --strict, --no-strict
                        strict mode raises warnings to errors, default: no
  --allow-file <ALLOW_FILE_PATTERNS>
                        Add file patterns to be ignored (In the new project target folder) defaults to: ('templates', '.git', '.pre-commit-config.yaml')

required:
  directory path for new project (default: current working directory)

.. _ozi-new-interactive:

``ozi-new interactive``
-----------------------

.. versionadded:: 1.13

usage: ozi-new interactive <options> | <positional arguments>

Create a new Python project with OZI using the interactive prompt.

positional arguments:
  target                directory path for new project (default: current working directory)

options:
  -h, --help            show this help message and exit

defaults:
  -c, --check-package-exists, --no-check-package-exists
                        check if the package name exists on PyPI, default: yes
