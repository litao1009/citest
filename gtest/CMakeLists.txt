cmake_minimum_required (VERSION 3.8)

project(gtest)

include_directories(include)
include_directories(src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(${PROJECT_NAME} STATIC src/gtest-all.cc)

add_definitions(-D_HAS_EXCEPTIONS=1)

if (WIN32)
    add_definitions(-DWIN32 -D_WINDOWS -D_WIN32 -DWIN32_LEAN_AND_MEAN -DGTEST_HAS_PTHREAD=0)
else()
	add_definitions(-DGTEST_HAS_PTHREAD=1)
	
	target_link_libraries(${PROJECT_NAME} PRIVATE
						pthread
						)
						
endif (WIN32)

set(GTEST_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include" PARENT_SCOPE)