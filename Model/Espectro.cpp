#include "Espectro.h"

Espectro::Espectro()
    : Enemigo("Espectro", 50, 25, 8) {}

void Espectro::Habilidad(Jugador& j) {
    j.GastarMana(10);
}
