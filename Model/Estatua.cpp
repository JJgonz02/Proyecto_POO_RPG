#include "Estatua.h"

Estatua::Estatua()
    : Enemigo("Estatua Embrujada", 120, 5, 18) {}

std::string Estatua::Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    j.AplicarBuffAtaque(-5);
    return nombre + " penetra en tu alma con la mirada, te reduce el ataque!";
}

std::string Estatua::Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    int cura = (rand() % 11) +10;
    for (auto& e : aliados) {
        if (e && e->EstaViva())
            e->Curar(cura);
    }
    return nombre + " se cura a si mismo y a sus aliados: " + std::to_string(cura);
}

std::string Estatua::Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Estatua::Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Estatua::Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}

int Estatua::NumHabilidades() {
    return 2;
}
