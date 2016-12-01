# CMake için olmazsa olmaz 2 satır.
cmake_minimum_required (VERSION 2.6)
project (caf_cmake)


set (CMAKE_CXX_STANDART 11)
if (UNIX)
	set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")
endif()

#başlık dosyalarını yapılandırma

#Bu dizini dahil et.
include_directories( /usr/local/include )

#Kütüphane dosyalarının nerde olduğunu söylüyorum
link_directories( /usr/local/lib )

#Uygulamayı çalıştırılabilir hale getir, main.cpp'den
add_executable(caf_cmake main.cpp)

#Kütüphaneleri bağla
target_link_libraries( caf_cmake caf_core caf_io)