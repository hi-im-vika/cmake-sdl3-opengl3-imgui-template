# cmake-sdl3-opengl3-imgui-template

Template project that uses the following:
* CMake
* ImGui
* SDL3
* OpenGL
* spdlog

## Compatibility
This project compiles on:
* macOS
* Windows
* Linux

vcpkg is used to manage dependencies.

### macOS
No special notes at this time.
### Windows
This projeect compiles in Visual Studio and the CLion IDE with the Visual Studio toolchain.
For Visual Studio, the folder must be opened as a CMake project.
### Linux
This project successfully compiles and builds on a Steam Deck running SteamOS, with Homebrew
and vcpkg installed. CMake must be told to use `gcc` from Homebrew to see libraries installed
through Homebrew and for vcpkg to build packages with those libraries.
#### Steam Deck
Until I find a better way, set `CC=<path/to/homebrew/gcc>` and `CXX=<path/to/homebrew/g++>`.
Installing `pkgconf` might be helpful too.