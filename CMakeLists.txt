cmake_minimum_required (VERSION 3.8)

project (vsCmake)

if (NOT WIN32 )
    set( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++17 -stdlib=libc++ -fPIC" )
	set( CMAKE_CXX_FLAGS_RELEASE  "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG -O3" )
else()
    set( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /std:c++17 /Zc:__cplusplus -D_SILENCE_ALL_CXX17_DEPRECATION_WARNINGS /wd\"4819\"" ) 
    set( CMAKE_CXX_FLAGS_RELEASE  "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG" )
    set( CMAKE_CXX_FLAGS_DEBUG  "${CMAKE_CXX_FLAGS_DEBUG} /DEBUG:FULL" )
endif()

set( CMAKE_CXX_FLAGS_DEBUG  "${CMAKE_CXX_FLAGS_DEBUG} -D_DEBUG" )

add_subdirectory(gtest)
add_subdirectory (App)