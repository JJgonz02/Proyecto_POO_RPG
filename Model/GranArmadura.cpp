#include "GranArmadura.h"

GranArmadura::GranArmadura()
    : Enemigo("Gran Armadura", 120, 20, 28) {}

std::string GranArmadura::Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    j.GastarMana(5);
    int danio = j.RecibirDanio(ataque);
    return nombre + " te ataca causandote " + std::to_string(danio) + " de dano y absorbiendo 5 de mana";
}

std::string GranArmadura::Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    int buff = (rand() % 11) +8;
    ataque+=buff;
    return nombre + " afila su espada aumentando su ataque!";
}

std::string GranArmadura::Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string GranArmadura::Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string GranArmadura::Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}

int GranArmadura::NumHabilidades() {
    return 2;
}