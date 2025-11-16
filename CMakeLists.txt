cmake_minimum_required(VERSION 4.0)
project(RPG_POO)

set(CMAKE_CXX_STANDARD 20)

add_executable(RPG_POO main.cpp
        Model/Entidad.h
        Model/Entidad.cpp
        Model/Jugador.h
        Model/Jugador.cpp
        Model/Objeto.h
        Model/Consumible.h
        Model/Consumible.cpp
        Model/Equipable.h
        Model/Equipable.cpp
        Model/Inventario.h
        Model/Inventario.cpp)
