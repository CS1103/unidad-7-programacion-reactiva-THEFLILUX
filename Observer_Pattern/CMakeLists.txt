cmake_minimum_required(VERSION 3.14)
project(Observer_Pattern)

set(CMAKE_CXX_STANDARD 17)

add_executable(Observer_Pattern main.cpp subject.cpp subject.h Shop.cpp Shop.h Observer.h DummyProduct.cpp DummyProduct.h)