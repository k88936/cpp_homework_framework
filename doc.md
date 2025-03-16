# Building
## console application
### build
> 吐槽一下windows上构建工具用默认的msvc的话cmake --build竟然生成的是vs的工程文件，而不是直接编译.
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
> note:替换为你的Qt install path
```shell
cmake -G Ninja -S . -B build -DGUI_APPLICATION=ON -DCMAKE_TOOLCHAIN_FILE=C:\Qt\6.8.2\msvc2022_64\lib\cmake\Qt6\qt.toolchain.cmake
cmake --build build
C:\Qt\6.8.2\msvc2022_64\bin\windeployqt6.exe build/gui_application/gui_application.exe
```
or 使用 Qtcreator ,启用cmake option: GUI_APPLICATION
### build (for linux)
```shell
cmake -S . -B build -DGUI_APPILCATION=ON
cmake --build build
```
### run
```shell
./build/gui_application/gui_application
```
# 文档说明
观感建议顺序 markdown 编辑器 > html > pdf
