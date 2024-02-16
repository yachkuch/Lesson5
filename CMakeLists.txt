cmake_minimum_required(VERSION 3.0.0)

project(Vector_redactor VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

find_package(Boost COMPONENTS REQUIRED)

set(SOURCES
    main.cpp
    gui/screens/Source/MainWindow.cpp
    gui/widgets/Source/SelectMenuWidget.cpp
)

set(HEAD 
    gui/screens/Head/MainWindow.h
    gui/widgets/Head/SelectMenuWidget.h
)

add_executable(Vector_redactor ${SOURCES} ${HEAD})

target_include_directories(Vector_redactor PRIVATE
 gui/screens/Head gui/screens/Source
 gui/widgets/Head gui/widgets/Source
 gui/models/Head gui/models/Source
 )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
