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

# Include any dependencies generated for this target.
include plugins/bf2/CMakeFiles/bf2.dir/depend.make

# Include the progress variables for this target.
include plugins/bf2/CMakeFiles/bf2.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/bf2/CMakeFiles/bf2.dir/flags.make

plugins/bf2/CMakeFiles/bf2.dir/bf2.cpp.o: plugins/bf2/CMakeFiles/bf2.dir/flags.make
plugins/bf2/CMakeFiles/bf2.dir/bf2.cpp.o: ../plugins/bf2/bf2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgx/graphene/Tools/gsc/test/mumble/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plugins/bf2/CMakeFiles/bf2.dir/bf2.cpp.o"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf2 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bf2.dir/bf2.cpp.o -c /home/sgx/graphene/Tools/gsc/test/mumble/plugins/bf2/bf2.cpp

plugins/bf2/CMakeFiles/bf2.dir/bf2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bf2.dir/bf2.cpp.i"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgx/graphene/Tools/gsc/test/mumble/plugins/bf2/bf2.cpp > CMakeFiles/bf2.dir/bf2.cpp.i

plugins/bf2/CMakeFiles/bf2.dir/bf2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bf2.dir/bf2.cpp.s"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgx/graphene/Tools/gsc/test/mumble/plugins/bf2/bf2.cpp -o CMakeFiles/bf2.dir/bf2.cpp.s

# Object files for target bf2
bf2_OBJECTS = \
"CMakeFiles/bf2.dir/bf2.cpp.o"

# External object files for target bf2
bf2_EXTERNAL_OBJECTS =

plugins/libbf2.so: plugins/bf2/CMakeFiles/bf2.dir/bf2.cpp.o
plugins/libbf2.so: plugins/bf2/CMakeFiles/bf2.dir/build.make
plugins/libbf2.so: plugins/bf2/CMakeFiles/bf2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sgx/graphene/Tools/gsc/test/mumble/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../libbf2.so"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/bf2/CMakeFiles/bf2.dir/build: plugins/libbf2.so

.PHONY : plugins/bf2/CMakeFiles/bf2.dir/build

plugins/bf2/CMakeFiles/bf2.dir/clean:
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf2 && $(CMAKE_COMMAND) -P CMakeFiles/bf2.dir/cmake_clean.cmake
.PHONY : plugins/bf2/CMakeFiles/bf2.dir/clean

plugins/bf2/CMakeFiles/bf2.dir/depend:
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sgx/graphene/Tools/gsc/test/mumble /home/sgx/graphene/Tools/gsc/test/mumble/plugins/bf2 /home/sgx/graphene/Tools/gsc/test/mumble/build /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf2 /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf2/CMakeFiles/bf2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/bf2/CMakeFiles/bf2.dir/depend

