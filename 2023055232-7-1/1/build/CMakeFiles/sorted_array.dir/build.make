# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /root/workspace/2023055232-7-1/1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/workspace/2023055232-7-1/1/build

# Include any dependencies generated for this target.
include CMakeFiles/sorted_array.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sorted_array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sorted_array.dir/flags.make

CMakeFiles/sorted_array.dir/main.cc.o: CMakeFiles/sorted_array.dir/flags.make
CMakeFiles/sorted_array.dir/main.cc.o: ../main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/workspace/2023055232-7-1/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sorted_array.dir/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sorted_array.dir/main.cc.o -c /root/workspace/2023055232-7-1/1/main.cc

CMakeFiles/sorted_array.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sorted_array.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/workspace/2023055232-7-1/1/main.cc > CMakeFiles/sorted_array.dir/main.cc.i

CMakeFiles/sorted_array.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sorted_array.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/workspace/2023055232-7-1/1/main.cc -o CMakeFiles/sorted_array.dir/main.cc.s

CMakeFiles/sorted_array.dir/main.cc.o.requires:

.PHONY : CMakeFiles/sorted_array.dir/main.cc.o.requires

CMakeFiles/sorted_array.dir/main.cc.o.provides: CMakeFiles/sorted_array.dir/main.cc.o.requires
	$(MAKE) -f CMakeFiles/sorted_array.dir/build.make CMakeFiles/sorted_array.dir/main.cc.o.provides.build
.PHONY : CMakeFiles/sorted_array.dir/main.cc.o.provides

CMakeFiles/sorted_array.dir/main.cc.o.provides.build: CMakeFiles/sorted_array.dir/main.cc.o


CMakeFiles/sorted_array.dir/sorted.cc.o: CMakeFiles/sorted_array.dir/flags.make
CMakeFiles/sorted_array.dir/sorted.cc.o: ../sorted.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/workspace/2023055232-7-1/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sorted_array.dir/sorted.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sorted_array.dir/sorted.cc.o -c /root/workspace/2023055232-7-1/1/sorted.cc

CMakeFiles/sorted_array.dir/sorted.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sorted_array.dir/sorted.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/workspace/2023055232-7-1/1/sorted.cc > CMakeFiles/sorted_array.dir/sorted.cc.i

CMakeFiles/sorted_array.dir/sorted.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sorted_array.dir/sorted.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/workspace/2023055232-7-1/1/sorted.cc -o CMakeFiles/sorted_array.dir/sorted.cc.s

CMakeFiles/sorted_array.dir/sorted.cc.o.requires:

.PHONY : CMakeFiles/sorted_array.dir/sorted.cc.o.requires

CMakeFiles/sorted_array.dir/sorted.cc.o.provides: CMakeFiles/sorted_array.dir/sorted.cc.o.requires
	$(MAKE) -f CMakeFiles/sorted_array.dir/build.make CMakeFiles/sorted_array.dir/sorted.cc.o.provides.build
.PHONY : CMakeFiles/sorted_array.dir/sorted.cc.o.provides

CMakeFiles/sorted_array.dir/sorted.cc.o.provides.build: CMakeFiles/sorted_array.dir/sorted.cc.o


# Object files for target sorted_array
sorted_array_OBJECTS = \
"CMakeFiles/sorted_array.dir/main.cc.o" \
"CMakeFiles/sorted_array.dir/sorted.cc.o"

# External object files for target sorted_array
sorted_array_EXTERNAL_OBJECTS =

sorted_array: CMakeFiles/sorted_array.dir/main.cc.o
sorted_array: CMakeFiles/sorted_array.dir/sorted.cc.o
sorted_array: CMakeFiles/sorted_array.dir/build.make
sorted_array: CMakeFiles/sorted_array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/workspace/2023055232-7-1/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable sorted_array"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sorted_array.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sorted_array.dir/build: sorted_array

.PHONY : CMakeFiles/sorted_array.dir/build

CMakeFiles/sorted_array.dir/requires: CMakeFiles/sorted_array.dir/main.cc.o.requires
CMakeFiles/sorted_array.dir/requires: CMakeFiles/sorted_array.dir/sorted.cc.o.requires

.PHONY : CMakeFiles/sorted_array.dir/requires

CMakeFiles/sorted_array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sorted_array.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sorted_array.dir/clean

CMakeFiles/sorted_array.dir/depend:
	cd /root/workspace/2023055232-7-1/1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/workspace/2023055232-7-1/1 /root/workspace/2023055232-7-1/1 /root/workspace/2023055232-7-1/1/build /root/workspace/2023055232-7-1/1/build /root/workspace/2023055232-7-1/1/build/CMakeFiles/sorted_array.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sorted_array.dir/depend

