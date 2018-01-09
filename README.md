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

Using [Stack Overflow](https://stackoverflow.com/a/12041646) to set the correct doxygen flags, in Doxyfile, set

```
doxygen -g > /dev/null; ( cat Doxyfile ; echo "QUIET=TRUE"; echo "EXCLUDE=README.md" ; echo "WARN_AS_ERROR=YES") | doxygen -
```



## Which PPA?

With this `.travis.yml`:

```
  - sudo add-apt-repository -y ppa:libreoffice/ppa
  - sudo apt-get install -qq doxygen graphviz
  - doxygen --version
```

Doxygen 1.8.7 is installed.

With this `.travis.yml`:

```
  - sudo add-apt-repository -y ppa:libreoffice/libreoffice-prereleases
  - sudo apt-get install -qq doxygen graphviz
  - doxygen --version
```

Doxygen 1.8.7 is installed.

