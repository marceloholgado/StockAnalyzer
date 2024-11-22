cmake_minimum_required(VERSION 3.17)
project("stock_analizer")

if(WIN32)
    set(CMAKE_C_COMPILER "C:/msys64/ucrt64/bin/gcc.exe")
    set(CMAKE_CXX_COMPILER "C:/msys64/ucrt64/bin/g++.exe")
elseif(UNIX)
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED True)
endif()
    
# Find GTKmm package
INCLUDE(FindPkgConfig)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)

# Check if GTKmm was found
if (NOT GTKMM_FOUND)
    message(FATAL_ERROR "GTKmm not found. Please install GTKmm.")
endif()

# Include GTKmm headers
include_directories(${GTKMM_INCLUDE_DIRS})

# Add the source files for the project
add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/gdatastocksmarket.cpp
    src/stock.cpp
    src/stockhistory.cpp
)

# Link the GTKmm libraries
target_link_libraries(${PROJECT_NAME} 
    ${GTKMM_LIBRARIES}
)