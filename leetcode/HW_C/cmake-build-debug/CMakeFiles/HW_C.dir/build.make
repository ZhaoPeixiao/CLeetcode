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
CMAKE_SOURCE_DIR = D:\Workshop\CLeetcode\leetcode\HW_C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Workshop\CLeetcode\leetcode\HW_C\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HW_C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW_C.dir/flags.make

CMakeFiles/HW_C.dir/main.c.obj: CMakeFiles/HW_C.dir/flags.make
CMakeFiles/HW_C.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Workshop\CLeetcode\leetcode\HW_C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/HW_C.dir/main.c.obj"
	G:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\HW_C.dir\main.c.obj -c D:\Workshop\CLeetcode\leetcode\HW_C\main.c

CMakeFiles/HW_C.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HW_C.dir/main.c.i"
	G:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Workshop\CLeetcode\leetcode\HW_C\main.c > CMakeFiles\HW_C.dir\main.c.i

CMakeFiles/HW_C.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HW_C.dir/main.c.s"
	G:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Workshop\CLeetcode\leetcode\HW_C\main.c -o CMakeFiles\HW_C.dir\main.c.s

CMakeFiles/HW_C.dir/prog.c.obj: CMakeFiles/HW_C.dir/flags.make
CMakeFiles/HW_C.dir/prog.c.obj: ../prog.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Workshop\CLeetcode\leetcode\HW_C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/HW_C.dir/prog.c.obj"
	G:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\HW_C.dir\prog.c.obj -c D:\Workshop\CLeetcode\leetcode\HW_C\prog.c

CMakeFiles/HW_C.dir/prog.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/HW_C.dir/prog.c.i"
	G:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Workshop\CLeetcode\leetcode\HW_C\prog.c > CMakeFiles\HW_C.dir\prog.c.i

CMakeFiles/HW_C.dir/prog.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/HW_C.dir/prog.c.s"
	G:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Workshop\CLeetcode\leetcode\HW_C\prog.c -o CMakeFiles\HW_C.dir\prog.c.s

# Object files for target HW_C
HW_C_OBJECTS = \
"CMakeFiles/HW_C.dir/main.c.obj" \
"CMakeFiles/HW_C.dir/prog.c.obj"

# External object files for target HW_C
HW_C_EXTERNAL_OBJECTS =

HW_C.exe: CMakeFiles/HW_C.dir/main.c.obj
HW_C.exe: CMakeFiles/HW_C.dir/prog.c.obj
HW_C.exe: CMakeFiles/HW_C.dir/build.make
HW_C.exe: CMakeFiles/HW_C.dir/linklibs.rsp
HW_C.exe: CMakeFiles/HW_C.dir/objects1.rsp
HW_C.exe: CMakeFiles/HW_C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Workshop\CLeetcode\leetcode\HW_C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable HW_C.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HW_C.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW_C.dir/build: HW_C.exe

.PHONY : CMakeFiles/HW_C.dir/build

CMakeFiles/HW_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HW_C.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HW_C.dir/clean

CMakeFiles/HW_C.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Workshop\CLeetcode\leetcode\HW_C D:\Workshop\CLeetcode\leetcode\HW_C D:\Workshop\CLeetcode\leetcode\HW_C\cmake-build-debug D:\Workshop\CLeetcode\leetcode\HW_C\cmake-build-debug D:\Workshop\CLeetcode\leetcode\HW_C\cmake-build-debug\CMakeFiles\HW_C.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HW_C.dir/depend

