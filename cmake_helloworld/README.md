# CMake Hello World

Most basic "hello world" setup with CMake using a `./build` dir
with a `compile_commands.json` for LSP servers like [clangd](https://clangd.llvm.org) or [ccls](https://github.com/MaskRay/ccls).

## Setup

```sh
cd cmake_helloworld
./scripts/setup_cmake.sh
```

## Build and run

```
cd cmake_helloworld/build
make
./main
```
