# CMake dosyası için, olmazsa olmaz. Proje adı ve cmake versiyonu
cmake_minimum_required (VERSION 2.6)
project (cmake_tutorial)

# Başlık dosyalarını cmake'e bildiriyoruz.
configure_file (
	"${PROJECT_SOURCE_DIR}/headers/sum.hpp"
	"${PROJECT_BINARY_DIR}/headers/sum.hpp"
)

# Başlık dosyalarını araması için özel dizin veriyoruz
include_directories ("${PROJECT_BINARY_DIR}/headers")

# Çalıştırılabilir hale çevir. Kaynak kodlar verilmeli
add_executable (app main.cpp headers/topla.cpp)
