# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/huangzheng/Coding/SakuraEngine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/huangzheng/Coding/SakuraEngine/cmake-build-debug

# Include any dependencies generated for this target.
include SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/depend.make

# Include the progress variables for this target.
include SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/progress.make

# Include the compile flags for this target's objects.
include SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/flags.make

SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.o: SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/flags.make
SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.o: ../SakuraEngine/UnitTests/coro/UnitTestCoro.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/huangzheng/Coding/SakuraEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.o"
	cd /Users/huangzheng/Coding/SakuraEngine/cmake-build-debug/SakuraEngine/UnitTests/coro && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.o -c /Users/huangzheng/Coding/SakuraEngine/SakuraEngine/UnitTests/coro/UnitTestCoro.cpp

SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.i"
	cd /Users/huangzheng/Coding/SakuraEngine/cmake-build-debug/SakuraEngine/UnitTests/coro && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/huangzheng/Coding/SakuraEngine/SakuraEngine/UnitTests/coro/UnitTestCoro.cpp > CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.i

SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.s"
	cd /Users/huangzheng/Coding/SakuraEngine/cmake-build-debug/SakuraEngine/UnitTests/coro && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/huangzheng/Coding/SakuraEngine/SakuraEngine/UnitTests/coro/UnitTestCoro.cpp -o CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.s

# Object files for target UnitTestCoro
UnitTestCoro_OBJECTS = \
"CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.o"

# External object files for target UnitTestCoro
UnitTestCoro_EXTERNAL_OBJECTS =

Debug/bin/UnitTestCoro: SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/UnitTestCoro.cpp.o
Debug/bin/UnitTestCoro: SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/build.make
Debug/bin/UnitTestCoro: Debug/lib/libCored.a
Debug/bin/UnitTestCoro: /Users/huangzheng/vcpkg/installed/x64-osx/debug/lib/libfmtd.a
Debug/bin/UnitTestCoro: Debug/lib/libSImGuid.a
Debug/bin/UnitTestCoro: /Users/huangzheng/vcpkg/installed/x64-osx/debug/lib/libSDL2d.a
Debug/bin/UnitTestCoro: /Users/huangzheng/vcpkg/installed/x64-osx/debug/lib/libfreetyped.a
Debug/bin/UnitTestCoro: /Users/huangzheng/vcpkg/installed/x64-osx/debug/lib/libz.a
Debug/bin/UnitTestCoro: /Users/huangzheng/vcpkg/installed/x64-osx/debug/lib/libbz2d.a
Debug/bin/UnitTestCoro: /Users/huangzheng/vcpkg/installed/x64-osx/debug/lib/libpng16d.a
Debug/bin/UnitTestCoro: /Users/huangzheng/vcpkg/installed/x64-osx/debug/lib/libz.a
Debug/bin/UnitTestCoro: /Users/huangzheng/vcpkg/installed/x64-osx/debug/lib/libbz2d.a
Debug/bin/UnitTestCoro: /Users/huangzheng/vcpkg/installed/x64-osx/debug/lib/libpng16d.a
Debug/bin/UnitTestCoro: /Users/huangzheng/vcpkg/installed/x64-osx/debug/lib/libEASTL.a
Debug/bin/UnitTestCoro: SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/huangzheng/Coding/SakuraEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../Debug/bin/UnitTestCoro"
	cd /Users/huangzheng/Coding/SakuraEngine/cmake-build-debug/SakuraEngine/UnitTests/coro && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UnitTestCoro.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/build: Debug/bin/UnitTestCoro

.PHONY : SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/build

SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/clean:
	cd /Users/huangzheng/Coding/SakuraEngine/cmake-build-debug/SakuraEngine/UnitTests/coro && $(CMAKE_COMMAND) -P CMakeFiles/UnitTestCoro.dir/cmake_clean.cmake
.PHONY : SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/clean

SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/depend:
	cd /Users/huangzheng/Coding/SakuraEngine/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/huangzheng/Coding/SakuraEngine /Users/huangzheng/Coding/SakuraEngine/SakuraEngine/UnitTests/coro /Users/huangzheng/Coding/SakuraEngine/cmake-build-debug /Users/huangzheng/Coding/SakuraEngine/cmake-build-debug/SakuraEngine/UnitTests/coro /Users/huangzheng/Coding/SakuraEngine/cmake-build-debug/SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : SakuraEngine/UnitTests/coro/CMakeFiles/UnitTestCoro.dir/depend
