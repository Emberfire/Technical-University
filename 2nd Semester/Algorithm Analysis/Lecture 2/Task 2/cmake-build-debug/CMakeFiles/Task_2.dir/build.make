# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "S:\Programs\Jetbrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "S:\Programs\Jetbrains\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Task_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Task_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task_2.dir/flags.make

CMakeFiles/Task_2.dir/main.cpp.obj: CMakeFiles/Task_2.dir/flags.make
CMakeFiles/Task_2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task_2.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Task_2.dir\main.cpp.obj -c "S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2\main.cpp"

CMakeFiles/Task_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task_2.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2\main.cpp" > CMakeFiles\Task_2.dir\main.cpp.i

CMakeFiles/Task_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task_2.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2\main.cpp" -o CMakeFiles\Task_2.dir\main.cpp.s

# Object files for target Task_2
Task_2_OBJECTS = \
"CMakeFiles/Task_2.dir/main.cpp.obj"

# External object files for target Task_2
Task_2_EXTERNAL_OBJECTS =

Task_2.exe: CMakeFiles/Task_2.dir/main.cpp.obj
Task_2.exe: CMakeFiles/Task_2.dir/build.make
Task_2.exe: CMakeFiles/Task_2.dir/linklibs.rsp
Task_2.exe: CMakeFiles/Task_2.dir/objects1.rsp
Task_2.exe: CMakeFiles/Task_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Task_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Task_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task_2.dir/build: Task_2.exe

.PHONY : CMakeFiles/Task_2.dir/build

CMakeFiles/Task_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Task_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Task_2.dir/clean

CMakeFiles/Task_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2" "S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2" "S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2\cmake-build-debug" "S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2\cmake-build-debug" "S:\Technical-University\2nd Semester\Algorithm Analysis\Lecture 2\Task 2\cmake-build-debug\CMakeFiles\Task_2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Task_2.dir/depend

