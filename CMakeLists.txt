# Define minimum CMake VERSION
cmake_minimum_required(VERSION 2.8.11)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the Qt libraries
find_package(Qt5Core NO_MODULE CONFIG REQUIRED)
find_package(Qt5Network NO_MODULE CONFIG REQUIRED)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(test EXCLUDE_FROM_ALL)
