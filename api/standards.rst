=========
Standards
=========

* Python
   * Prefer LF over CRLF line endings
   * Maximum line width 93
   * Check PEP 8 - Style Guide for Python Code
   * Check PEP 287 - reStructuredText Docstring Format
   * Check PEP 484 - Type Hints
   * Check PEP 3107 - Function Annotations
   * Only support the 3 most recent Python versions that are not 
     ``end-of-life``, ``prerelease``, or ``feature`` status.
   * Normalize unicode version between minor Python releases
     (currently all supported versions are using ``unicodedata.unidata_version == '13.0.0'``)
* Universal utility requirements
   * ``pyproject.toml`` provides configuration
   * ``meson.options`` provides non-configurable (commandline-only) options
   * Exit successfully
* Excluding restructuredtext-lint
   * Target all sources and tests (recursively when possible)
* Linting and Formatting
   * Bandit
      * Ignore nosec comments (``--ignore-nosec``)
      * B101-B113, B201-B202, B301-B324, B401-B415, B501-B509, B601-B612, B701-B703
   * Black
      * show differences (``--diff``)
      * run in check mode (``--check``)
      * skip string normalization (``-S``)
   * Flake8
      * Maximum complexity of 5 (``--max-complexity=5``)
      * Respect noqa comments
         * C901: complexity <= 8
         * INP001: tests and scripts
      * flake8-annotations ANN001-ANN003, ANN101-ANN102, ANN201-ANN206
      * flake8-broken-line N400
      * flake8-bugbear B001-B033
      * flake8-comprehensions C400-C419
      * flake8-datetimez DTZ001-DTZ012
      * flake8-docstring-checker DC100-DC104
      * flake8-eradicate E800
      * flake8-fixme T100-T102
      * flake8-leading-blank-lines LBL001
      * flake8-no-pep420 INP001
      * flake8-pyi Y001-Y057
      * flake8-pytest-style PT001-PT027
      * flake8-quotes Q000-Q003
      * flake8-tidy-imports I250, I252
      * flake8-type-checking TC001-TC006
   * isort
      * show differences (``--diff``)
      * run in check mode (``--check``)
   * pylint
      * ``check-quote-consistency=true``
      * ``expected-line-ending-format = "LF"``
      * ``max-nested-blocks=4``