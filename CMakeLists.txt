cmake_minimum_required(VERSION 3.10)
project(raft-cpp)

# Specify C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(core)

# Collect all source files recursively
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add the collected source files to the executable target
add_executable(raft-cpp ${SOURCES})

# Include the 'core' headers
target_include_directories(raft-cpp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/core/include)

# Link the 'core' static library with 'raft-cpp'
target_link_libraries(raft-cpp PRIVATE core)
