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
CMAKE_SOURCE_DIR = /root/workspace/2023055232-8-2/1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/workspace/2023055232-8-2/1/build

# Include any dependencies generated for this target.
include CMakeFiles/draw_shape.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/draw_shape.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/draw_shape.dir/flags.make

CMakeFiles/draw_shape.dir/main.cc.o: CMakeFiles/draw_shape.dir/flags.make
CMakeFiles/draw_shape.dir/main.cc.o: ../main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/workspace/2023055232-8-2/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/draw_shape.dir/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/draw_shape.dir/main.cc.o -c /root/workspace/2023055232-8-2/1/main.cc

CMakeFiles/draw_shape.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/draw_shape.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/workspace/2023055232-8-2/1/main.cc > CMakeFiles/draw_shape.dir/main.cc.i

CMakeFiles/draw_shape.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/draw_shape.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/workspace/2023055232-8-2/1/main.cc -o CMakeFiles/draw_shape.dir/main.cc.s

CMakeFiles/draw_shape.dir/main.cc.o.requires:

.PHONY : CMakeFiles/draw_shape.dir/main.cc.o.requires

CMakeFiles/draw_shape.dir/main.cc.o.provides: CMakeFiles/draw_shape.dir/main.cc.o.requires
	$(MAKE) -f CMakeFiles/draw_shape.dir/build.make CMakeFiles/draw_shape.dir/main.cc.o.provides.build
.PHONY : CMakeFiles/draw_shape.dir/main.cc.o.provides

CMakeFiles/draw_shape.dir/main.cc.o.provides.build: CMakeFiles/draw_shape.dir/main.cc.o


CMakeFiles/draw_shape.dir/shapes.cc.o: CMakeFiles/draw_shape.dir/flags.make
CMakeFiles/draw_shape.dir/shapes.cc.o: ../shapes.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/workspace/2023055232-8-2/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/draw_shape.dir/shapes.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/draw_shape.dir/shapes.cc.o -c /root/workspace/2023055232-8-2/1/shapes.cc

CMakeFiles/draw_shape.dir/shapes.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/draw_shape.dir/shapes.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/workspace/2023055232-8-2/1/shapes.cc > CMakeFiles/draw_shape.dir/shapes.cc.i

CMakeFiles/draw_shape.dir/shapes.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/draw_shape.dir/shapes.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/workspace/2023055232-8-2/1/shapes.cc -o CMakeFiles/draw_shape.dir/shapes.cc.s

CMakeFiles/draw_shape.dir/shapes.cc.o.requires:

.PHONY : CMakeFiles/draw_shape.dir/shapes.cc.o.requires

CMakeFiles/draw_shape.dir/shapes.cc.o.provides: CMakeFiles/draw_shape.dir/shapes.cc.o.requires
	$(MAKE) -f CMakeFiles/draw_shape.dir/build.make CMakeFiles/draw_shape.dir/shapes.cc.o.provides.build
.PHONY : CMakeFiles/draw_shape.dir/shapes.cc.o.provides

CMakeFiles/draw_shape.dir/shapes.cc.o.provides.build: CMakeFiles/draw_shape.dir/shapes.cc.o


# Object files for target draw_shape
draw_shape_OBJECTS = \
"CMakeFiles/draw_shape.dir/main.cc.o" \
"CMakeFiles/draw_shape.dir/shapes.cc.o"

# External object files for target draw_shape
draw_shape_EXTERNAL_OBJECTS =

draw_shape: CMakeFiles/draw_shape.dir/main.cc.o
draw_shape: CMakeFiles/draw_shape.dir/shapes.cc.o
draw_shape: CMakeFiles/draw_shape.dir/build.make
draw_shape: CMakeFiles/draw_shape.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/workspace/2023055232-8-2/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable draw_shape"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/draw_shape.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/draw_shape.dir/build: draw_shape

.PHONY : CMakeFiles/draw_shape.dir/build

CMakeFiles/draw_shape.dir/requires: CMakeFiles/draw_shape.dir/main.cc.o.requires
CMakeFiles/draw_shape.dir/requires: CMakeFiles/draw_shape.dir/shapes.cc.o.requires

.PHONY : CMakeFiles/draw_shape.dir/requires

CMakeFiles/draw_shape.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/draw_shape.dir/cmake_clean.cmake
.PHONY : CMakeFiles/draw_shape.dir/clean

CMakeFiles/draw_shape.dir/depend:
	cd /root/workspace/2023055232-8-2/1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/workspace/2023055232-8-2/1 /root/workspace/2023055232-8-2/1 /root/workspace/2023055232-8-2/1/build /root/workspace/2023055232-8-2/1/build /root/workspace/2023055232-8-2/1/build/CMakeFiles/draw_shape.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/draw_shape.dir/depend

