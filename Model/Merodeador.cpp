#include "Merodeador.h"

Merodeador::Merodeador()
    : Enemigo("Merodeador de las Ruinas", 30, 10, 10){}

void Merodeador::Habilidad(Jugador& j) {;
    ataque += 5;
}