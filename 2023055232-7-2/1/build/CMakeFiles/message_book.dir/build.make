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
CMAKE_SOURCE_DIR = /root/workspace/2023055232-7-2/1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/workspace/2023055232-7-2/1/build

# Include any dependencies generated for this target.
include CMakeFiles/message_book.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/message_book.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/message_book.dir/flags.make

CMakeFiles/message_book.dir/main.cc.o: CMakeFiles/message_book.dir/flags.make
CMakeFiles/message_book.dir/main.cc.o: ../main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/workspace/2023055232-7-2/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/message_book.dir/main.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/message_book.dir/main.cc.o -c /root/workspace/2023055232-7-2/1/main.cc

CMakeFiles/message_book.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/message_book.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/workspace/2023055232-7-2/1/main.cc > CMakeFiles/message_book.dir/main.cc.i

CMakeFiles/message_book.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/message_book.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/workspace/2023055232-7-2/1/main.cc -o CMakeFiles/message_book.dir/main.cc.s

CMakeFiles/message_book.dir/main.cc.o.requires:

.PHONY : CMakeFiles/message_book.dir/main.cc.o.requires

CMakeFiles/message_book.dir/main.cc.o.provides: CMakeFiles/message_book.dir/main.cc.o.requires
	$(MAKE) -f CMakeFiles/message_book.dir/build.make CMakeFiles/message_book.dir/main.cc.o.provides.build
.PHONY : CMakeFiles/message_book.dir/main.cc.o.provides

CMakeFiles/message_book.dir/main.cc.o.provides.build: CMakeFiles/message_book.dir/main.cc.o


CMakeFiles/message_book.dir/message.cc.o: CMakeFiles/message_book.dir/flags.make
CMakeFiles/message_book.dir/message.cc.o: ../message.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/workspace/2023055232-7-2/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/message_book.dir/message.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/message_book.dir/message.cc.o -c /root/workspace/2023055232-7-2/1/message.cc

CMakeFiles/message_book.dir/message.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/message_book.dir/message.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/workspace/2023055232-7-2/1/message.cc > CMakeFiles/message_book.dir/message.cc.i

CMakeFiles/message_book.dir/message.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/message_book.dir/message.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/workspace/2023055232-7-2/1/message.cc -o CMakeFiles/message_book.dir/message.cc.s

CMakeFiles/message_book.dir/message.cc.o.requires:

.PHONY : CMakeFiles/message_book.dir/message.cc.o.requires

CMakeFiles/message_book.dir/message.cc.o.provides: CMakeFiles/message_book.dir/message.cc.o.requires
	$(MAKE) -f CMakeFiles/message_book.dir/build.make CMakeFiles/message_book.dir/message.cc.o.provides.build
.PHONY : CMakeFiles/message_book.dir/message.cc.o.provides

CMakeFiles/message_book.dir/message.cc.o.provides.build: CMakeFiles/message_book.dir/message.cc.o


# Object files for target message_book
message_book_OBJECTS = \
"CMakeFiles/message_book.dir/main.cc.o" \
"CMakeFiles/message_book.dir/message.cc.o"

# External object files for target message_book
message_book_EXTERNAL_OBJECTS =

message_book: CMakeFiles/message_book.dir/main.cc.o
message_book: CMakeFiles/message_book.dir/message.cc.o
message_book: CMakeFiles/message_book.dir/build.make
message_book: CMakeFiles/message_book.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/workspace/2023055232-7-2/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable message_book"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/message_book.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/message_book.dir/build: message_book

.PHONY : CMakeFiles/message_book.dir/build

CMakeFiles/message_book.dir/requires: CMakeFiles/message_book.dir/main.cc.o.requires
CMakeFiles/message_book.dir/requires: CMakeFiles/message_book.dir/message.cc.o.requires

.PHONY : CMakeFiles/message_book.dir/requires

CMakeFiles/message_book.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/message_book.dir/cmake_clean.cmake
.PHONY : CMakeFiles/message_book.dir/clean

CMakeFiles/message_book.dir/depend:
	cd /root/workspace/2023055232-7-2/1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/workspace/2023055232-7-2/1 /root/workspace/2023055232-7-2/1 /root/workspace/2023055232-7-2/1/build /root/workspace/2023055232-7-2/1/build /root/workspace/2023055232-7-2/1/build/CMakeFiles/message_book.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/message_book.dir/depend

