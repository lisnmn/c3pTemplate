cmake_minimum_required(VERSION 3.17)
project(c3pTemplate)

set(CMAKE_CXX_STANDARD 14)

add_library(c3pTemplate SHARED abstract_plugin.h plugin.h inifile.cpp inifile.h ConcretePlugin.cpp ConcretePlugin.h)