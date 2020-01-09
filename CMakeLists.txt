cmake_minimum_required(VERSION 3.15)
project(Dnd)

set(CMAKE_CXX_STANDARD 14)

add_executable(Dnd main.cpp Room.h State.h Passage.h Player.h Misc.h Game.h Game.cpp)