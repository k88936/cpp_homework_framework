# Building
## console application
### build
```shell
cmake -G Ninja -S . -B build
cmake --build build
```

### test 
```shell
ctest --test-dir build
```

### run
```shell
./build/application/application
```

## gui application 
### build (for windows) 
> note: replace with your Qt path
```shell
cmake -G Ninja -S . -B build -DENABLE_GUI=ON -DCMAKE_TOOLCHAIN_FILE=C:\Qt\6.8.2\mingw_64\lib\cmake\Qt6\qt.toolchain.cmake
cmake --build build
C:\Qt\6.8.2\mingw_64\bin\windeployqt6.exe build/gui_application/gui_application.exe
```
### build (for archlinux)
```shell
cmake -S . -B build -DBUILD_GUI=ON
cmake --build build
```
### run
```shell
./build/gui_application/gui_application
```



