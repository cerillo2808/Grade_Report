#!/bin/bash

clang-format -i -style=file $(find . -name '*.c' -or -name '*.cc' -or -name '*.cpp' -or -name '*.cxx' -or -name '*.h' -or -name '*.hh' -or -name '*.hxx' -or -name '*.hpp')