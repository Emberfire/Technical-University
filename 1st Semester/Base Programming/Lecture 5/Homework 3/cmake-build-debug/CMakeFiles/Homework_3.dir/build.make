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
CMAKE_SOURCE_DIR = "D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Homework_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Homework_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Homework_3.dir/flags.make

CMakeFiles/Homework_3.dir/main.cpp.obj: CMakeFiles/Homework_3.dir/flags.make
CMakeFiles/Homework_3.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Homework_3.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Homework_3.dir\main.cpp.obj -c "D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3\main.cpp"

CMakeFiles/Homework_3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Homework_3.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3\main.cpp" > CMakeFiles\Homework_3.dir\main.cpp.i

CMakeFiles/Homework_3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Homework_3.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3\main.cpp" -o CMakeFiles\Homework_3.dir\main.cpp.s

# Object files for target Homework_3
Homework_3_OBJECTS = \
"CMakeFiles/Homework_3.dir/main.cpp.obj"

# External object files for target Homework_3
Homework_3_EXTERNAL_OBJECTS =

Homework_3.exe: CMakeFiles/Homework_3.dir/main.cpp.obj
Homework_3.exe: CMakeFiles/Homework_3.dir/build.make
Homework_3.exe: CMakeFiles/Homework_3.dir/linklibs.rsp
Homework_3.exe: CMakeFiles/Homework_3.dir/objects1.rsp
Homework_3.exe: CMakeFiles/Homework_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Homework_3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Homework_3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Homework_3.dir/build: Homework_3.exe

.PHONY : CMakeFiles/Homework_3.dir/build

CMakeFiles/Homework_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Homework_3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Homework_3.dir/clean

CMakeFiles/Homework_3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3" "D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3" "D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3\cmake-build-debug" "D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3\cmake-build-debug" "D:\Technical University\1st Semester\Base Programming\Lecture 5\Homework 3\cmake-build-debug\CMakeFiles\Homework_3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Homework_3.dir/depend

