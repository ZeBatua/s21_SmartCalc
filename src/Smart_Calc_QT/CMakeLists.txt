cmake_minimum_required(VERSION 3.5)

project(Smart_Calc_QT VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS PrintSupport REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui

        qcustomplot.h
        qcustomplot.cpp

        calc.h
        calculator/read_string.c
        calculator/valid_string.c
        calculator/calc_string.c
        calculator/add_x_value_in_string.c

        credit/credit_annuity_calc.c
        credit/credit_diff_calc.c

        deposit/is_norm_dep_values.c
        deposit/dep_calc.c

)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Smart_Calc_QT
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Smart_Calc_QT APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Smart_Calc_QT SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Smart_Calc_QT
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Smart_Calc_QT PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(Smart_Calc_QT PRIVATE Qt${QT_VERSION_MAJOR}::PrintSupport)

set_target_properties(Smart_Calc_QT PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Smart_Calc_QT)
endif()
