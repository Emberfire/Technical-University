# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Homework_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Homework_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Homework_4.dir/flags.make

CMakeFiles/Homework_4.dir/main.cpp.obj: CMakeFiles/Homework_4.dir/flags.make
CMakeFiles/Homework_4.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Homework_4.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Homework_4.dir\main.cpp.obj -c "U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4\main.cpp"

CMakeFiles/Homework_4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Homework_4.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4\main.cpp" > CMakeFiles\Homework_4.dir\main.cpp.i

CMakeFiles/Homework_4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Homework_4.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4\main.cpp" -o CMakeFiles\Homework_4.dir\main.cpp.s

# Object files for target Homework_4
Homework_4_OBJECTS = \
"CMakeFiles/Homework_4.dir/main.cpp.obj"

# External object files for target Homework_4
Homework_4_EXTERNAL_OBJECTS =

Homework_4.exe: CMakeFiles/Homework_4.dir/main.cpp.obj
Homework_4.exe: CMakeFiles/Homework_4.dir/build.make
Homework_4.exe: CMakeFiles/Homework_4.dir/linklibs.rsp
Homework_4.exe: CMakeFiles/Homework_4.dir/objects1.rsp
Homework_4.exe: CMakeFiles/Homework_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Homework_4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Homework_4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Homework_4.dir/build: Homework_4.exe

.PHONY : CMakeFiles/Homework_4.dir/build

CMakeFiles/Homework_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Homework_4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Homework_4.dir/clean

CMakeFiles/Homework_4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4" "U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4" "U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4\cmake-build-debug" "U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4\cmake-build-debug" "U:\Technical University\1st Semester\Base Programming\Lecture 4\Homework 4\cmake-build-debug\CMakeFiles\Homework_4.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Homework_4.dir/depend

