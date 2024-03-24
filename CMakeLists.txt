cmake_minimum_required(VERSION 3.10)
project(mini_projekt)

# Dodanie folderów z plikami nagłówkowymi do ścieżki dołączania
include_directories(Service DataModel Models Controller)

# Zdefiniowanie plików źródłowych
set(SOURCES
    Service/UserService.cpp
    Service/UserServiceClass.cpp
    Controller/HttpController.cpp
    Controller/HttpControllerClass.cpp
    DataModel/UserDatabase.cpp
    Models/User.cpp
    config.h
    Main.cpp
)

# Dodanie plików źródłowych do programu wykonywalnego
add_executable(MyProgram ${SOURCES})