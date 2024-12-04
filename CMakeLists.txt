cmake_minimum_required(VERSION 3.18)

project(CVInferenceEngines)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH /Users/binun/personal-workspace/libtorch)

find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

include_directories(
    include/ 
    "${TORCH_INCLUDE_DIRS}"
)

# add library
add_library(PoseEstimator ./src/PoseEstimator.cpp)

add_executable(${PROJECT_NAME} ./src/main.cpp)
target_link_libraries(${PROJECT_NAME} PoseEstimator "${TORCH_LIBRARIES}")

# target_link_libraries()