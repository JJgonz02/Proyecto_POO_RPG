#include "Merodeador.h"

Merodeador::Merodeador()
    : Enemigo("Merodeador de las Ruinas", 30, 10, 10){}

std::string Merodeador::Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    ataque += 5;
    return nombre + " se enfurece y aumenta su ataque!";
}

std::string Merodeador::Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Merodeador::Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Merodeador::Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Merodeador::Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}

int Merodeador::NumHabilidades() {
    return 1;
}