# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/Smart_Calc_QT.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Smart_Calc_QT.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Smart_Calc_QT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Smart_Calc_QT.dir/flags.make

CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.o: CMakeFiles/Smart_Calc_QT.dir/flags.make
CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.o: Smart_Calc_QT_autogen/mocs_compilation.cpp
CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.o: CMakeFiles/Smart_Calc_QT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.o -c /Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/Smart_Calc_QT_autogen/mocs_compilation.cpp

CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/Smart_Calc_QT_autogen/mocs_compilation.cpp > CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.i

CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/Smart_Calc_QT_autogen/mocs_compilation.cpp -o CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.s

CMakeFiles/Smart_Calc_QT.dir/main.cpp.o: CMakeFiles/Smart_Calc_QT.dir/flags.make
CMakeFiles/Smart_Calc_QT.dir/main.cpp.o: /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/main.cpp
CMakeFiles/Smart_Calc_QT.dir/main.cpp.o: CMakeFiles/Smart_Calc_QT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Smart_Calc_QT.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Smart_Calc_QT.dir/main.cpp.o -MF CMakeFiles/Smart_Calc_QT.dir/main.cpp.o.d -o CMakeFiles/Smart_Calc_QT.dir/main.cpp.o -c /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/main.cpp

CMakeFiles/Smart_Calc_QT.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Smart_Calc_QT.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/main.cpp > CMakeFiles/Smart_Calc_QT.dir/main.cpp.i

CMakeFiles/Smart_Calc_QT.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Smart_Calc_QT.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/main.cpp -o CMakeFiles/Smart_Calc_QT.dir/main.cpp.s

CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.o: CMakeFiles/Smart_Calc_QT.dir/flags.make
CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.o: /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/mainwindow.cpp
CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.o: CMakeFiles/Smart_Calc_QT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.o -MF CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.o.d -o CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.o -c /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/mainwindow.cpp

CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/mainwindow.cpp > CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.i

CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/mainwindow.cpp -o CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.s

CMakeFiles/Smart_Calc_QT.dir/read_string.c.o: CMakeFiles/Smart_Calc_QT.dir/flags.make
CMakeFiles/Smart_Calc_QT.dir/read_string.c.o: /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/read_string.c
CMakeFiles/Smart_Calc_QT.dir/read_string.c.o: CMakeFiles/Smart_Calc_QT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Smart_Calc_QT.dir/read_string.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Smart_Calc_QT.dir/read_string.c.o -MF CMakeFiles/Smart_Calc_QT.dir/read_string.c.o.d -o CMakeFiles/Smart_Calc_QT.dir/read_string.c.o -c /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/read_string.c

CMakeFiles/Smart_Calc_QT.dir/read_string.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Smart_Calc_QT.dir/read_string.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/read_string.c > CMakeFiles/Smart_Calc_QT.dir/read_string.c.i

CMakeFiles/Smart_Calc_QT.dir/read_string.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Smart_Calc_QT.dir/read_string.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT/read_string.c -o CMakeFiles/Smart_Calc_QT.dir/read_string.c.s

# Object files for target Smart_Calc_QT
Smart_Calc_QT_OBJECTS = \
"CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Smart_Calc_QT.dir/main.cpp.o" \
"CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.o" \
"CMakeFiles/Smart_Calc_QT.dir/read_string.c.o"

# External object files for target Smart_Calc_QT
Smart_Calc_QT_EXTERNAL_OBJECTS =

Smart_Calc_QT.app/Contents/MacOS/Smart_Calc_QT: CMakeFiles/Smart_Calc_QT.dir/Smart_Calc_QT_autogen/mocs_compilation.cpp.o
Smart_Calc_QT.app/Contents/MacOS/Smart_Calc_QT: CMakeFiles/Smart_Calc_QT.dir/main.cpp.o
Smart_Calc_QT.app/Contents/MacOS/Smart_Calc_QT: CMakeFiles/Smart_Calc_QT.dir/mainwindow.cpp.o
Smart_Calc_QT.app/Contents/MacOS/Smart_Calc_QT: CMakeFiles/Smart_Calc_QT.dir/read_string.c.o
Smart_Calc_QT.app/Contents/MacOS/Smart_Calc_QT: CMakeFiles/Smart_Calc_QT.dir/build.make
Smart_Calc_QT.app/Contents/MacOS/Smart_Calc_QT: /usr/local/lib/QtWidgets.framework/Versions/A/QtWidgets
Smart_Calc_QT.app/Contents/MacOS/Smart_Calc_QT: /usr/local/lib/QtGui.framework/Versions/A/QtGui
Smart_Calc_QT.app/Contents/MacOS/Smart_Calc_QT: /usr/local/lib/QtCore.framework/Versions/A/QtCore
Smart_Calc_QT.app/Contents/MacOS/Smart_Calc_QT: CMakeFiles/Smart_Calc_QT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Smart_Calc_QT.app/Contents/MacOS/Smart_Calc_QT"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Smart_Calc_QT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Smart_Calc_QT.dir/build: Smart_Calc_QT.app/Contents/MacOS/Smart_Calc_QT
.PHONY : CMakeFiles/Smart_Calc_QT.dir/build

CMakeFiles/Smart_Calc_QT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Smart_Calc_QT.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Smart_Calc_QT.dir/clean

CMakeFiles/Smart_Calc_QT.dir/depend:
	cd /Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT /Users/thalassa/C7_SmartCalc_v1.0-0/src/Smart_Calc_QT /Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug /Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug /Users/thalassa/C7_SmartCalc_v1.0-0/src/build-Smart_Calc_QT-Desktop_x86_darwin_generic_mach_o_64bit-Debug/CMakeFiles/Smart_Calc_QT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Smart_Calc_QT.dir/depend

