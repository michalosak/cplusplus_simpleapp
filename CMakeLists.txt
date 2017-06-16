cmake_minimum_required(VERSION 3.7)
project(cplusplus_simpleapp)
find_package(PythonLibs REQUIRED)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp model/todo.cpp model/todo.h model/todolist.cpp model/todolist.h)
add_executable(cplusplus_simpleapp ${SOURCE_FILES})
target_link_libraries(cplusplus_simpleapp ${PYTHON_LIBRARIES})