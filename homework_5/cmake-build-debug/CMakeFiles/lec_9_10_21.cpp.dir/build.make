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
CMAKE_COMMAND = C:\Users\Marina\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Marina\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Marina\CLionProjects\III_term\homework_5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Marina\CLionProjects\III_term\homework_5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lec_9_10_21.cpp.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/lec_9_10_21.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lec_9_10_21.cpp.dir/flags.make

CMakeFiles/lec_9_10_21.cpp.dir/lec_9_10_21.cpp.obj: CMakeFiles/lec_9_10_21.cpp.dir/flags.make
CMakeFiles/lec_9_10_21.cpp.dir/lec_9_10_21.cpp.obj: ../lec_9_10_21.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Marina\CLionProjects\III_term\homework_5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lec_9_10_21.cpp.dir/lec_9_10_21.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lec_9_10_21.cpp.dir\lec_9_10_21.cpp.obj -c C:\Users\Marina\CLionProjects\III_term\homework_5\lec_9_10_21.cpp

CMakeFiles/lec_9_10_21.cpp.dir/lec_9_10_21.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lec_9_10_21.cpp.dir/lec_9_10_21.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Marina\CLionProjects\III_term\homework_5\lec_9_10_21.cpp > CMakeFiles\lec_9_10_21.cpp.dir\lec_9_10_21.cpp.i

CMakeFiles/lec_9_10_21.cpp.dir/lec_9_10_21.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lec_9_10_21.cpp.dir/lec_9_10_21.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Marina\CLionProjects\III_term\homework_5\lec_9_10_21.cpp -o CMakeFiles\lec_9_10_21.cpp.dir\lec_9_10_21.cpp.s

# Object files for target lec_9_10_21.cpp
lec_9_10_21_cpp_OBJECTS = \
"CMakeFiles/lec_9_10_21.cpp.dir/lec_9_10_21.cpp.obj"

# External object files for target lec_9_10_21.cpp
lec_9_10_21_cpp_EXTERNAL_OBJECTS =

lec_9_10_21.cpp.exe: CMakeFiles/lec_9_10_21.cpp.dir/lec_9_10_21.cpp.obj
lec_9_10_21.cpp.exe: CMakeFiles/lec_9_10_21.cpp.dir/build.make
lec_9_10_21.cpp.exe: CMakeFiles/lec_9_10_21.cpp.dir/linklibs.rsp
lec_9_10_21.cpp.exe: CMakeFiles/lec_9_10_21.cpp.dir/objects1.rsp
lec_9_10_21.cpp.exe: CMakeFiles/lec_9_10_21.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Marina\CLionProjects\III_term\homework_5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lec_9_10_21.cpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lec_9_10_21.cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lec_9_10_21.cpp.dir/build: lec_9_10_21.cpp.exe
.PHONY : CMakeFiles/lec_9_10_21.cpp.dir/build

CMakeFiles/lec_9_10_21.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lec_9_10_21.cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lec_9_10_21.cpp.dir/clean

CMakeFiles/lec_9_10_21.cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Marina\CLionProjects\III_term\homework_5 C:\Users\Marina\CLionProjects\III_term\homework_5 C:\Users\Marina\CLionProjects\III_term\homework_5\cmake-build-debug C:\Users\Marina\CLionProjects\III_term\homework_5\cmake-build-debug C:\Users\Marina\CLionProjects\III_term\homework_5\cmake-build-debug\CMakeFiles\lec_9_10_21.cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lec_9_10_21.cpp.dir/depend

