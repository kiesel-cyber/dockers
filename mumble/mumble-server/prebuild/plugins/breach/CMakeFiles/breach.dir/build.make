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
include plugins/breach/CMakeFiles/breach.dir/depend.make

# Include the progress variables for this target.
include plugins/breach/CMakeFiles/breach.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/breach/CMakeFiles/breach.dir/flags.make

plugins/breach/CMakeFiles/breach.dir/breach.cpp.o: plugins/breach/CMakeFiles/breach.dir/flags.make
plugins/breach/CMakeFiles/breach.dir/breach.cpp.o: ../plugins/breach/breach.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgx/graphene/Tools/gsc/test/mumble/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plugins/breach/CMakeFiles/breach.dir/breach.cpp.o"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/breach && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/breach.dir/breach.cpp.o -c /home/sgx/graphene/Tools/gsc/test/mumble/plugins/breach/breach.cpp

plugins/breach/CMakeFiles/breach.dir/breach.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/breach.dir/breach.cpp.i"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/breach && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgx/graphene/Tools/gsc/test/mumble/plugins/breach/breach.cpp > CMakeFiles/breach.dir/breach.cpp.i

plugins/breach/CMakeFiles/breach.dir/breach.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/breach.dir/breach.cpp.s"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/breach && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgx/graphene/Tools/gsc/test/mumble/plugins/breach/breach.cpp -o CMakeFiles/breach.dir/breach.cpp.s

# Object files for target breach
breach_OBJECTS = \
"CMakeFiles/breach.dir/breach.cpp.o"

# External object files for target breach
breach_EXTERNAL_OBJECTS =

plugins/libbreach.so: plugins/breach/CMakeFiles/breach.dir/breach.cpp.o
plugins/libbreach.so: plugins/breach/CMakeFiles/breach.dir/build.make
plugins/libbreach.so: plugins/breach/CMakeFiles/breach.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sgx/graphene/Tools/gsc/test/mumble/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../libbreach.so"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/breach && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/breach.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/breach/CMakeFiles/breach.dir/build: plugins/libbreach.so

.PHONY : plugins/breach/CMakeFiles/breach.dir/build

plugins/breach/CMakeFiles/breach.dir/clean:
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/breach && $(CMAKE_COMMAND) -P CMakeFiles/breach.dir/cmake_clean.cmake
.PHONY : plugins/breach/CMakeFiles/breach.dir/clean

plugins/breach/CMakeFiles/breach.dir/depend:
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sgx/graphene/Tools/gsc/test/mumble /home/sgx/graphene/Tools/gsc/test/mumble/plugins/breach /home/sgx/graphene/Tools/gsc/test/mumble/build /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/breach /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/breach/CMakeFiles/breach.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/breach/CMakeFiles/breach.dir/depend

