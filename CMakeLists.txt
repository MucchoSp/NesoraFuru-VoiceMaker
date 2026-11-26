# 音諳零号機四型
# Copyright (c) 2026 MucchoSP
# SPDX-License-Identifier: MIT

cmake_minimum_required(VERSION 3.10.0)
project(NesoraMikomi VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory(lib/wxWidgets)
add_subdirectory(lib/NesoraFuru)

add_executable(Nesora src/NesoraFuru.cpp
    src/NesoraLayout/NesoraMainFrame.cpp)

target_link_libraries(Nesora NesoraFuruLib)
target_link_libraries(Nesora wx::net wx::core wx::base wx::aui)

target_compile_features(Nesora PUBLIC cxx_std_17)

