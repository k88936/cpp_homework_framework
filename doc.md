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
cmake -G Ninja -S . -B build -DGUI_APPLICATION=ON -DCMAKE_TOOLCHAIN_FILE=C:\Qt\6.8.2\mingw_64\lib\cmake\Qt6\qt.toolchain.cmake
cmake --build build
C:\Qt\6.8.2\mingw_64\bin\windeployqt6.exe build/gui_application/gui_application.exe
```
or use Qtcreator, remember to turn on GUI_APPLICATION option
### build (for archlinux)
```shell
cmake -S . -B build -DGUI_APPILCATION=ON
cmake --build build
```
### run
```shell
./build/gui_application/gui_application
```



