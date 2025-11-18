#include "Estatua.h"

Estatua::Estatua()
    : Enemigo("Estatua Embrujada", 90, 5, 18) {}

void Estatua::Habilidad(Jugador& j) {
    j.AplicarBuffAtaque(-5);
}

void Estatua::Habilidad2(std::vector<Enemigo*>& aliados) {
    int cura = (rand() % 11) +10;
    for (auto& e : aliados) {
        if (e && e->EstaViva())
            e->Curar(cura);
    }
}
