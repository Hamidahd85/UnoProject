cmake_minimum_required(VERSION 3.29)
project(untitled134)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled134 main.cpp
        Player.h
        card.cpp
        Player.cpp
        NumberCard.cpp
        BotPlayer.h
        BotPlayer.cpp
        HumanPlayer.h
        HumanPlayer.cpp
        Manager.h
        Manager.cpp)
