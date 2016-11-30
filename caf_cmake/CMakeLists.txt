# CMake için olmazsa olmaz 2 satır.
cmake_minimum_required (VERSION 2.6)
project (caf_cmake)


set (CMAKE_CXX_STANDART 11)
if (UNIX)
	set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")
endif()

#başlık dosyalarını yapılandırma

#find_package(CAF REQUIRED)

include_directories( ${CAF_INCLUDE_DIRS} )

add_executable(app main.cpp)
target_link_libraries( app ${CAF_LIBRARIES} )