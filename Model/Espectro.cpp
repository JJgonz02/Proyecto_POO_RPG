#include "Espectro.h"

Espectro::Espectro()
    : Enemigo("Espectro", 50, 30, 10) {}

std::string Espectro::Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    j.GastarMana(10);
    return nombre + " interrumpe tu conexión con la magia y absorbe 10 de mana";
}

std::string Espectro::Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Espectro::Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Espectro::Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Espectro::Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}

int Espectro::NumHabilidades() {
    return 1;
}
