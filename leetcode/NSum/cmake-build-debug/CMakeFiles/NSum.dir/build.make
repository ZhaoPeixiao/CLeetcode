# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_SOURCE_DIR = D:\workshop\CLeetcode\leetcode\NSum

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\workshop\CLeetcode\leetcode\NSum\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NSum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NSum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NSum.dir/flags.make

CMakeFiles/NSum.dir/main.cpp.obj: CMakeFiles/NSum.dir/flags.make
CMakeFiles/NSum.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workshop\CLeetcode\leetcode\NSum\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NSum.dir/main.cpp.obj"
	G:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\NSum.dir\main.cpp.obj -c D:\workshop\CLeetcode\leetcode\NSum\main.cpp

CMakeFiles/NSum.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NSum.dir/main.cpp.i"
	G:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\workshop\CLeetcode\leetcode\NSum\main.cpp > CMakeFiles\NSum.dir\main.cpp.i

CMakeFiles/NSum.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NSum.dir/main.cpp.s"
	G:\MinGW\bin\mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\workshop\CLeetcode\leetcode\NSum\main.cpp -o CMakeFiles\NSum.dir\main.cpp.s

# Object files for target NSum
NSum_OBJECTS = \
"CMakeFiles/NSum.dir/main.cpp.obj"

# External object files for target NSum
NSum_EXTERNAL_OBJECTS =

NSum.exe: CMakeFiles/NSum.dir/main.cpp.obj
NSum.exe: CMakeFiles/NSum.dir/build.make
NSum.exe: CMakeFiles/NSum.dir/linklibs.rsp
NSum.exe: CMakeFiles/NSum.dir/objects1.rsp
NSum.exe: CMakeFiles/NSum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\workshop\CLeetcode\leetcode\NSum\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NSum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\NSum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NSum.dir/build: NSum.exe

.PHONY : CMakeFiles/NSum.dir/build

CMakeFiles/NSum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\NSum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/NSum.dir/clean

CMakeFiles/NSum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\workshop\CLeetcode\leetcode\NSum D:\workshop\CLeetcode\leetcode\NSum D:\workshop\CLeetcode\leetcode\NSum\cmake-build-debug D:\workshop\CLeetcode\leetcode\NSum\cmake-build-debug D:\workshop\CLeetcode\leetcode\NSum\cmake-build-debug\CMakeFiles\NSum.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NSum.dir/depend

