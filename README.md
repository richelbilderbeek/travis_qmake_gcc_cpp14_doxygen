# travis_qmake_gcc_cpp14_doxygen

Branch|[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_doxygen.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_doxygen)

This GitHub is part of:

 * [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial)
 
The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++14`
 * Libraries: `STL` only
 * Code coverage: none
 * Documentation: `doxygen`
 * Source: one single file, `main.cpp`

More complex builds:

 * [none]

Builds of similar complexity:

 * [none]

Less complex builds:

 * No `doxygen`: [travis_qmake_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14)

## External links

 * [doxygen GitHub](https://github.com/doxygen/doxygen)

## How to force documentation

In all cases, the text below must be present in all files, otherwise Doxygen will not check these:

```
/** @file */
```

For doxygen 1.8.7, to exit a script with an error code:

```
doxygen -g > /dev/null; exit `(cat Doxyfile ; echo "QUIET=YES" ; echo "EXCLUDE=README.md") | doxygen - 2>&1 | egrep "warning" | wc --lines`
```


For doxygen 1.8.13, to exit a script with an error code:

```
doxygen -g > /dev/null; ( cat Doxyfile ; echo "QUIET=YES"; echo "EXCLUDE=README.md" ; echo "WARN_AS_ERROR=YES") | doxygen -
```

Thanks to [this Stack Overflow post](https://stackoverflow.com/a/12041646).

