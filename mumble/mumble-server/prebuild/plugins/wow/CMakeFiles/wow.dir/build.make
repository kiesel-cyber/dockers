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
include plugins/wow/CMakeFiles/wow.dir/depend.make

# Include the progress variables for this target.
include plugins/wow/CMakeFiles/wow.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/wow/CMakeFiles/wow.dir/flags.make

plugins/wow/CMakeFiles/wow.dir/wow.cpp.o: plugins/wow/CMakeFiles/wow.dir/flags.make
plugins/wow/CMakeFiles/wow.dir/wow.cpp.o: ../plugins/wow/wow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sgx/graphene/Tools/gsc/test/mumble/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plugins/wow/CMakeFiles/wow.dir/wow.cpp.o"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/wow && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wow.dir/wow.cpp.o -c /home/sgx/graphene/Tools/gsc/test/mumble/plugins/wow/wow.cpp

plugins/wow/CMakeFiles/wow.dir/wow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wow.dir/wow.cpp.i"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/wow && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sgx/graphene/Tools/gsc/test/mumble/plugins/wow/wow.cpp > CMakeFiles/wow.dir/wow.cpp.i

plugins/wow/CMakeFiles/wow.dir/wow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wow.dir/wow.cpp.s"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/wow && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sgx/graphene/Tools/gsc/test/mumble/plugins/wow/wow.cpp -o CMakeFiles/wow.dir/wow.cpp.s

# Object files for target wow
wow_OBJECTS = \
"CMakeFiles/wow.dir/wow.cpp.o"

# External object files for target wow
wow_EXTERNAL_OBJECTS =

plugins/libwow.so: plugins/wow/CMakeFiles/wow.dir/wow.cpp.o
plugins/libwow.so: plugins/wow/CMakeFiles/wow.dir/build.make
plugins/libwow.so: plugins/wow/CMakeFiles/wow.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sgx/graphene/Tools/gsc/test/mumble/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../libwow.so"
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/wow && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wow.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/wow/CMakeFiles/wow.dir/build: plugins/libwow.so

.PHONY : plugins/wow/CMakeFiles/wow.dir/build

plugins/wow/CMakeFiles/wow.dir/clean:
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/wow && $(CMAKE_COMMAND) -P CMakeFiles/wow.dir/cmake_clean.cmake
.PHONY : plugins/wow/CMakeFiles/wow.dir/clean

plugins/wow/CMakeFiles/wow.dir/depend:
	cd /home/sgx/graphene/Tools/gsc/test/mumble/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sgx/graphene/Tools/gsc/test/mumble /home/sgx/graphene/Tools/gsc/test/mumble/plugins/wow /home/sgx/graphene/Tools/gsc/test/mumble/build /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/wow /home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/wow/CMakeFiles/wow.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/wow/CMakeFiles/wow.dir/depend

