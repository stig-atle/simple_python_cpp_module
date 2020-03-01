cmake_minimum_required (VERSION 3.7)

project ("MyPythonModule")
set(CMAKE_STATIC_LIBRARY_PREFIX "")
set(Python_ADDITIONAL_VERSIONS 3.7)
FIND_PACKAGE(PythonLibs 3.7 EXACT REQUIRED)

include_directories("./3rdparty/pybind11/include")
include_directories(${PYTHON_INCLUDE_DIRS})

link_directories(${PYTHON_LIBRARIES})

add_library (MyPythonModule SHARED Source.cpp)
set_target_properties(MyPythonModule PROPERTIES SUFFIX ".pyd")
target_link_libraries(MyPythonModule ${PYTHON_LIBRARIES})