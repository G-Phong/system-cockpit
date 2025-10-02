# Almost all CMake files should start with this
# You should always specify a range with the newest
# and oldest tested versions of CMake. This will ensure
# you pick up the best policies.
cmake_minimum_required(VERSION 3.15...4.0)

# This is your project statement. You should always list languages;
# Listing the version is nice here since it sets lots of useful variables
project(
  system-cockpit
  VERSION 1.0
  LANGUAGES CXX)

# If you set any CMAKE_ variables, that can go here.
# (But usually don't do this, except maybe for C++ standard)

# Find packages go here.
# find_package(Qt5 COMPONENTS Core DBus REQUIRED)

# You should usually split this into folders, but this is a simple example

# This is a "default" library, and will match the *** variable setting.
# Other common choices are STATIC, SHARED, and MODULE
# Including header files here helps IDEs but is not required.
# Output libname matches target name, with the usual extensions on your system
# add_library(MyLibExample simple_lib.cpp simple_lib.hpp)

# Link each target with other targets or add options, etc.

# Adding something we can run - Output name matches target name

# Glbo all .cpp files in src/
file(GLOB SRC_FILES "src/*.cpp")

# Glob all .hpp files in include/ and src/
file(GLOB HEADER_FILES "include/*.hpp" "src/*.hpp")

add_executable(system-cockpit ${SRC_FILES} ${HEADER_FILES})

# Make sure you link your targets with this command. It can also link libraries and
# even flags, so linking a target that does not exist will not give a configure-time error.
#target_link_libraries(MyExample PRIVATE MyLibExample)

# Link statically (not recommended)
#target_link_options(MyExample PRIVATE -static) # or: 
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")