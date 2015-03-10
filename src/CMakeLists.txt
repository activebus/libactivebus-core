# Define project name
project(activebus-core)

# Define source files
set(${PROJECT_NAME}_SRCS
    activebus-core_global.h

    version.cpp
    version_p.h
)

add_definitions(-DACTIVEBUSCORE_LIBRARY)

# Tell CMake to create the executable
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_SRCS})

# Link dependencies
target_link_libraries(${PROJECT_NAME} Qt5::Core)
