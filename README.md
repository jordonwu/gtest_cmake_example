# gtest_cmake_example
A simple googletest with cmake build example

## 1. dependencies package

Need build and install googletest firtly if using system's GTest
```
$ wget -O googletest-1.10.0.tar.gz https://github.com/google/googletest/archive/refs/tags/release-1.10.0.tar.gz
$ tar -zxf googletest-1.10.0.tar.gz
$ cd googletest-1.10.0
$ mkdir build && cd build
$ cmake ..
$ make
$ sudo make install
```

## 2. how to build this example
```
$ git clone https://github.com/jordonwu/gtest_cmake_example.git
$ cd gtest_cmake_example
$ mkdir build && cd build
$ cmake ..
$ make

```

## 3. how to run tests
* directly run tests
```
$ cd build
$ ./test/TestFoo

[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from TestFoo
[ RUN      ] TestFoo.add
[       OK ] TestFoo.add (0 ms)
[----------] 1 test from TestFoo (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.

```

* or run using ctest
```
//todo
```
