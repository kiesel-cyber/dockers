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
CMAKE_SOURCE_DIR = /home/sgx/graphene/Tools/gsc/test/mumble

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sgx/graphene/Tools/gsc/test/mumble/build

# Utility rule file for shared_autogen.

# Include the progress variables for this target.
include src/CMakeFiles/shared_autogen.dir/progress.make

src/CMakeFiles/shared_autogen: src/Mumble.pb.cc
src/CMakeFiles/shared_autogen: src/Mumble.pb.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sgx/graphene/Tools/gsc/test/mumble/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target shared"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/src && /usr/bin/cmake -E cmake_autogen /home/sgx/graphene/Tools/gsc/test/mumble/build/src/CMakeFiles/shared_autogen.dir/AutogenInfo.json Release

src/Mumble.pb.h: ../src/Mumble.proto
src/Mumble.pb.h: /usr/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sgx/graphene/Tools/gsc/test/mumble/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Running cpp protocol buffer compiler on /home/sgx/graphene/Tools/gsc/test/mumble/src/Mumble.proto"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/src && /usr/bin/protoc --cpp_out /home/sgx/graphene/Tools/gsc/test/mumble/build/src -I /home/sgx/graphene/Tools/gsc/test/mumble/src /home/sgx/graphene/Tools/gsc/test/mumble/src/Mumble.proto

src/Mumble.pb.cc: src/Mumble.pb.h
	@$(CMAKE_COMMAND) -E touch_nocreate src/Mumble.pb.cc

shared_autogen: src/CMakeFiles/shared_autogen
shared_autogen: src/Mumble.pb.h
shared_autogen: src/Mumble.pb.cc
shared_autogen: src/CMakeFiles/shared_autogen.dir/build.make

.PHONY : shared_autogen

# Rule to build all files generated by this target.
src/CMakeFiles/shared_autogen.dir/build: shared_autogen

.PHONY : src/CMakeFiles/shared_autogen.dir/build

src/CMakeFiles/shared_autogen.dir/clean:
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/src && $(CMAKE_COMMAND) -P CMakeFiles/shared_autogen.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/shared_autogen.dir/clean

src/CMakeFiles/shared_autogen.dir/depend:
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sgx/graphene/Tools/gsc/test/mumble /home/sgx/graphene/Tools/gsc/test/mumble/src /home/sgx/graphene/Tools/gsc/test/mumble/build /home/sgx/graphene/Tools/gsc/test/mumble/build/src /home/sgx/graphene/Tools/gsc/test/mumble/build/src/CMakeFiles/shared_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/shared_autogen.dir/depend
