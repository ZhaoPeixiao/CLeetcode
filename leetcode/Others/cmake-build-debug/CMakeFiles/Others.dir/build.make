# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "G:\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "G:\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Workshop\CLeetcode\leetcode\Others

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Workshop\CLeetcode\leetcode\Others\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Others.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Others.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Others.dir/flags.make

CMakeFiles/Others.dir/main.cpp.obj: CMakeFiles/Others.dir/flags.make
CMakeFiles/Others.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Workshop\CLeetcode\leetcode\Others\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Others.dir/main.cpp.obj"
	G:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Others.dir\main.cpp.obj -c D:\Workshop\CLeetcode\leetcode\Others\main.cpp

CMakeFiles/Others.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Others.dir/main.cpp.i"
	G:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Workshop\CLeetcode\leetcode\Others\main.cpp > CMakeFiles\Others.dir\main.cpp.i

CMakeFiles/Others.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Others.dir/main.cpp.s"
	G:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Workshop\CLeetcode\leetcode\Others\main.cpp -o CMakeFiles\Others.dir\main.cpp.s

# Object files for target Others
Others_OBJECTS = \
"CMakeFiles/Others.dir/main.cpp.obj"

# External object files for target Others
Others_EXTERNAL_OBJECTS =

Others.exe: CMakeFiles/Others.dir/main.cpp.obj
Others.exe: CMakeFiles/Others.dir/build.make
Others.exe: CMakeFiles/Others.dir/linklibs.rsp
Others.exe: CMakeFiles/Others.dir/objects1.rsp
Others.exe: CMakeFiles/Others.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Workshop\CLeetcode\leetcode\Others\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Others.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Others.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Others.dir/build: Others.exe
.PHONY : CMakeFiles/Others.dir/build

CMakeFiles/Others.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Others.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Others.dir/clean

CMakeFiles/Others.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Workshop\CLeetcode\leetcode\Others D:\Workshop\CLeetcode\leetcode\Others D:\Workshop\CLeetcode\leetcode\Others\cmake-build-debug D:\Workshop\CLeetcode\leetcode\Others\cmake-build-debug D:\Workshop\CLeetcode\leetcode\Others\cmake-build-debug\CMakeFiles\Others.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Others.dir/depend

