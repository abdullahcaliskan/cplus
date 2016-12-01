cmake_minimum_required (VERSION 2.6)
project(caf_cmake)

#-std=gnu++0x
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")

# Degişken tanımladım
set (CAF_INCLUDE_DIRS /usr/local/include/caf/)
set (CAF_LIBRARY_DIRS /usr/local/lib/)

# Bu dizinleri, projeye ekledim
include_directories( ${CAF_INCLUDE_DIRS} )
include_directories( ${CAF_LIBRARY_DIRS} )

#Kütüphane adını yazdım
add_library(lcaf_io)
add_library(lcaf_core)

# Derlenecek dosya
add_executable(caf_cmake main.cpp)
#linklenecek kütüphane
target_link_libraries(caf_cmake lcaf_core lcaf_io)