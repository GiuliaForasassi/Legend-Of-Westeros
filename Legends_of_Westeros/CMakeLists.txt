cmake_minimum_required(VERSION 3.3)
project(Legends_of_Westeros)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Map.cpp Map.h ArmyFactory.cpp ArmyFactory.h Targaryen.cpp Targaryen.h SimpleTroop.cpp SimpleTroop.h Soldier.cpp Soldier.h MagicTroop.cpp MagicTroop.h Dragon.cpp Dragon.h)
add_executable(Legends_of_Westeros ${SOURCE_FILES})