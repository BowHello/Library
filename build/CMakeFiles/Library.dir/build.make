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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kristoffer/Documents/Programmering/Prosjekt/Library

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kristoffer/Documents/Programmering/Prosjekt/Library/build

# Include any dependencies generated for this target.
include CMakeFiles/Library.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Library.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Library.dir/flags.make

CMakeFiles/Library.dir/src/main.cpp.o: CMakeFiles/Library.dir/flags.make
CMakeFiles/Library.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kristoffer/Documents/Programmering/Prosjekt/Library/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Library.dir/src/main.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Library.dir/src/main.cpp.o -c /home/kristoffer/Documents/Programmering/Prosjekt/Library/src/main.cpp

CMakeFiles/Library.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/main.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kristoffer/Documents/Programmering/Prosjekt/Library/src/main.cpp > CMakeFiles/Library.dir/src/main.cpp.i

CMakeFiles/Library.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/main.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kristoffer/Documents/Programmering/Prosjekt/Library/src/main.cpp -o CMakeFiles/Library.dir/src/main.cpp.s

# Object files for target Library
Library_OBJECTS = \
"CMakeFiles/Library.dir/src/main.cpp.o"

# External object files for target Library
Library_EXTERNAL_OBJECTS =

Library: CMakeFiles/Library.dir/src/main.cpp.o
Library: CMakeFiles/Library.dir/build.make
Library: lib/liblib.a
Library: CMakeFiles/Library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kristoffer/Documents/Programmering/Prosjekt/Library/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Library"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Library.dir/build: Library

.PHONY : CMakeFiles/Library.dir/build

CMakeFiles/Library.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Library.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Library.dir/clean

CMakeFiles/Library.dir/depend:
	cd /home/kristoffer/Documents/Programmering/Prosjekt/Library/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kristoffer/Documents/Programmering/Prosjekt/Library /home/kristoffer/Documents/Programmering/Prosjekt/Library /home/kristoffer/Documents/Programmering/Prosjekt/Library/build /home/kristoffer/Documents/Programmering/Prosjekt/Library/build /home/kristoffer/Documents/Programmering/Prosjekt/Library/build/CMakeFiles/Library.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Library.dir/depend

