# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\simon\Documents\GitHub\LernenC\dhello

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\simon\Documents\GitHub\LernenC\dhello\build

# Include any dependencies generated for this target.
include CMakeFiles/tcone.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tcone.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tcone.dir/flags.make

CMakeFiles/tcone.dir/test/001-TestCase.cpp.obj: CMakeFiles/tcone.dir/flags.make
CMakeFiles/tcone.dir/test/001-TestCase.cpp.obj: CMakeFiles/tcone.dir/includes_CXX.rsp
CMakeFiles/tcone.dir/test/001-TestCase.cpp.obj: ../test/001-TestCase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simon\Documents\GitHub\LernenC\dhello\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tcone.dir/test/001-TestCase.cpp.obj"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\tcone.dir\test\001-TestCase.cpp.obj -c C:\Users\simon\Documents\GitHub\LernenC\dhello\test\001-TestCase.cpp

CMakeFiles/tcone.dir/test/001-TestCase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tcone.dir/test/001-TestCase.cpp.i"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\simon\Documents\GitHub\LernenC\dhello\test\001-TestCase.cpp > CMakeFiles\tcone.dir\test\001-TestCase.cpp.i

CMakeFiles/tcone.dir/test/001-TestCase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tcone.dir/test/001-TestCase.cpp.s"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\i686-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\simon\Documents\GitHub\LernenC\dhello\test\001-TestCase.cpp -o CMakeFiles\tcone.dir\test\001-TestCase.cpp.s

# Object files for target tcone
tcone_OBJECTS = \
"CMakeFiles/tcone.dir/test/001-TestCase.cpp.obj"

# External object files for target tcone
tcone_EXTERNAL_OBJECTS =

tcone.exe: CMakeFiles/tcone.dir/test/001-TestCase.cpp.obj
tcone.exe: CMakeFiles/tcone.dir/build.make
tcone.exe: CMakeFiles/tcone.dir/linklibs.rsp
tcone.exe: CMakeFiles/tcone.dir/objects1.rsp
tcone.exe: CMakeFiles/tcone.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\simon\Documents\GitHub\LernenC\dhello\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tcone.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tcone.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tcone.dir/build: tcone.exe

.PHONY : CMakeFiles/tcone.dir/build

CMakeFiles/tcone.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tcone.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tcone.dir/clean

CMakeFiles/tcone.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\simon\Documents\GitHub\LernenC\dhello C:\Users\simon\Documents\GitHub\LernenC\dhello C:\Users\simon\Documents\GitHub\LernenC\dhello\build C:\Users\simon\Documents\GitHub\LernenC\dhello\build C:\Users\simon\Documents\GitHub\LernenC\dhello\build\CMakeFiles\tcone.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tcone.dir/depend
