cmake_minimum_required (VERSION 3.8)

project(App)

file(GLOB SRC_LIST *.cpp)
add_executable (App ${SRC_LIST} )

target_include_directories(App PRIVATE
                            ${CMAKE_SOURCE_DIR}/gtest/include)

target_link_libraries(App PRIVATE
                        gtest)