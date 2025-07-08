cmake_minimum_required(VERSION 3.29)
project(YHA)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS
        ${CMAKE_SOURCE_DIR}/forms
)

set(CMAKE_PREFIX_PATH "C:/Qt/6.9.1/mingw_64/lib/cmake/")

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

add_executable(YHA
        main.cpp
        lib/MainWindow.cpp
        include/MainWindow.h
        forms/mainwindow.ui
)

target_include_directories(YHA PRIVATE
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/YHA_autogen/include
)

target_link_libraries(YHA
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
)

if(WIN32)
    add_custom_command(TARGET YHA POST_BUILD
            COMMAND "C:/Qt/6.9.1/mingw_64/bin/windeployqt.exe" "$<TARGET_FILE:YHA>"
            COMMENT "Uruchamianie windeployqt (kopiowanie DLL-i Qt)"
    )
endif()