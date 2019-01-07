cmake_minimum_required(VERSION 3.10.2)
project(WombytesFileServer VERSION 0.0.1 LANGUAGES CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

set(SRC_FILES src/main.cpp)
add_executable(${PROJECT_NAME} ${SRC_FILES})
target_compile_options(${PROJECT_NAME} PRIVATE -Wall)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
target_link_libraries(${PROJECT_NAME} PRIVATE CONAN_PKG::Poco)
