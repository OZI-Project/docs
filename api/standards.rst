=========
Standards
=========

* Universal
   * Maximum line width 93
   * ``pyproject.toml`` provides configuration
   * Exit successfully
* Excluding restructuredtext-lint
   * Target all sources and tests
* Bandit
   * Ignore nosec comments
* Black
   * skip string normalization (``-S``)
* Flake8
   * Maximum complexity of 5 (``--max-complexity=5``)
   * Respect noqa comments
      * C901: complexity <= 8
      * INP001: tests and scripts
   * Check PEP 8 - Style Guide for Python Code
   * Check PEP 287 - reStructuredText Docstring Format
   * Check PEP 484 - Type Hints
   * Check PEP 3107 - Function Annotations
   * Check annotations ANN001-ANN003, ANN101-ANN102, ANN201-ANN206
   * Check broken-line N400
   * Check bugbear B001-B033
   * Check comprehensions C400-C419
   * Check datetimez DTZ001-DTZ012
   * Check docstring-checker DC100-DC104
   * Check eradicate E800
   * Check fixme T100-T102
   * Check leading-blank-lines LBL001
   * Check no-pep420 INP001
   * Check pyi Y001-Y057
   * Check pytest-style PT001-PT027
   * Check quotes Q000-Q003
   * Check tidy-imports I250, I252
   * Check type-checking TC001-TC006