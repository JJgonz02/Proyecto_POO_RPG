#include "Constructo.h"

Constructo::Constructo()
    : Enemigo("Constructo", 80, 18, 20) {}

std::string Constructo::Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    int danio = j.RecibirDanio(ataque*0.7);
    j.RecibirDanio(ataque*0.7);
    return nombre + "Te ataca una vez causando " + std::to_string(danio) + " de dano\n"
    "Te ataca otra vez causando " + std::to_string(danio) + " de dano";
}

std::string Constructo::Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Constructo::Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Constructo::Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Constructo::Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}

int Constructo::NumHabilidades() {
    return 1;
}