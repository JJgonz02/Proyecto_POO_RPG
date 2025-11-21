#include "GranConstructo.h"

GranConstructo::GranConstructo()
    : Enemigo("Gran Constructo", 150, 12, 25) {}

std::string GranConstructo::Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    defensa += 8;
    return nombre + " se protege aumentando su defensa!";
}

std::string GranConstructo::Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string GranConstructo::Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string GranConstructo::Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string GranConstructo::Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}

int GranConstructo::NumHabilidades() {
    return 1;
}