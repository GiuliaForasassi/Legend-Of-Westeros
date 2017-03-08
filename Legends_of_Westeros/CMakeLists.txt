cmake_minimum_required(VERSION 3.3)
project(Legends_of_Westeros)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(test)

set(SOURCE_FILES main.cpp Map.cpp Map.h Army.cpp Army.h Targaryen.cpp Targaryen.h
        SimpleTroop.cpp SimpleTroop.h Soldier.cpp Soldier.h MagicTroop.cpp MagicTroop.h Dragon.cpp Dragon.h
        Stark.cpp Stark.h Wizard.cpp Wizard.h Lannister.cpp Lannister.h Archer.cpp Archer.h Baratheon.cpp
        Baratheon.h RedWizard.cpp RedWizard.h Knight.cpp Knight.h Greyjoy.cpp Greyjoy.h WhiteWalkers.cpp
        WhiteWalkers.h Zombie.cpp Zombie.h AbstractArmyFactory.cpp AbstractArmyFactory.h ConcreteArmyFactory.cpp
        ConcreteArmyFactory.h GameCharacter.h GameCharacter.cpp)
add_executable(Legends_of_Westeros ${SOURCE_FILES})

add_library(core ${SOURCE_FILES})
target_link_libraries(Legends_of_Westeros core)
