# Building
build
```shell
cmake -S . -B build
cmake --build build
```

test 
```shell
ctest --test-dir build
```

run
```shell
./build/application/application
```
