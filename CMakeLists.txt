cmake_minimum_required(VERSION 3.20.0)

project(Vector_redactor VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

#find_package(Boost COMPONENTS REQUIRED)

set(SOURCES
    main.cpp
    gui/screens/Source/MainWindow.cpp
    gui/widgets/Source/SelectMenuWidget.cpp
    gui/widgets/Source/Buttom.cpp
    models/Source/AbstractModel.cpp
    models/Source/CircleCustom.cpp
    models/Source/RectangleCustom.cpp
)

set(HEAD 
    gui/screens/Head/MainWindow.h
    gui/widgets/Head/SelectMenuWidget.h
    gui/widgets/Head/Buttom.h
    models/Head/AbstractModel.h
    models/Head/CircleCustom.h
    models/Head/RectangleCustom.h
)

add_executable(Vector_redactor ${SOURCES} ${HEAD})

target_include_directories(Vector_redactor PRIVATE
 gui/screens/Head gui/screens/Source
 gui/widgets/Head gui/widgets/Source
 models/Head      models/Source
 )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
