# WIP on using external clang with openmp #

This repository contains an example of a bazel defined C++ toolchain
consisting of a downloaded clang tarball that attempts to use openmp.

clang provides a "libomp.so" that is implicitly located when
`-fopenmp` is passed on the command line.  bazel needs to be taught
that this library is a dependency of all executables that are
compiled.  I am unsure how to do that.

Tested with bazel 0.21.0

```
bazel test //...
```

then,

```
$ ./bazel-bin/example/openmp_test
```

results in:

```
./bazel-bin/example/openmp_test: error while loading shared libraries: libomp.so: cannot open shared object file: No such file or directory
```
