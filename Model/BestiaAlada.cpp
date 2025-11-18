#include "BestiaAlada.h"

BestiaAlada::BestiaAlada()
    : Enemigo("Bestia Alada", 75, 18, 20) {}

void BestiaAlada::Habilidad(Jugador& j) {
    j.AplicarBuffDefensa(-5);
}
