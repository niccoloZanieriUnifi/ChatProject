# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/niccolo/CLion-2020.1.1/clion-2020.1.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/niccolo/CLion-2020.1.1/clion-2020.1.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/runAllTests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/runAllTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/runAllTests.dir/flags.make

CMakeFiles/runAllTests.dir/runAllTests.cpp.o: CMakeFiles/runAllTests.dir/flags.make
CMakeFiles/runAllTests.dir/runAllTests.cpp.o: ../runAllTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/runAllTests.dir/runAllTests.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runAllTests.dir/runAllTests.cpp.o -c "/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test/runAllTests.cpp"

CMakeFiles/runAllTests.dir/runAllTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runAllTests.dir/runAllTests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test/runAllTests.cpp" > CMakeFiles/runAllTests.dir/runAllTests.cpp.i

CMakeFiles/runAllTests.dir/runAllTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runAllTests.dir/runAllTests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test/runAllTests.cpp" -o CMakeFiles/runAllTests.dir/runAllTests.cpp.s

# Object files for target runAllTests
runAllTests_OBJECTS = \
"CMakeFiles/runAllTests.dir/runAllTests.cpp.o"

# External object files for target runAllTests
runAllTests_EXTERNAL_OBJECTS =

runAllTests: CMakeFiles/runAllTests.dir/runAllTests.cpp.o
runAllTests: CMakeFiles/runAllTests.dir/build.make
runAllTests: lib/googletest/libgtestd.a
runAllTests: lib/googletest/libgtest_maind.a
runAllTests: lib/googletest/libgtestd.a
runAllTests: CMakeFiles/runAllTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable runAllTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runAllTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/runAllTests.dir/build: runAllTests

.PHONY : CMakeFiles/runAllTests.dir/build

CMakeFiles/runAllTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/runAllTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/runAllTests.dir/clean

CMakeFiles/runAllTests.dir/depend:
	cd "/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test" "/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test" "/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test/cmake-build-debug" "/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test/cmake-build-debug" "/home/niccolo/Insync/niccolo.zanieri.13@gmail.com/Google Drive/My_Life/School/UniFi/Primo_Anno/Laboratorio_di_Programmazione/Lab_Projects/ChatProject/test/cmake-build-debug/CMakeFiles/runAllTests.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/runAllTests.dir/depend
