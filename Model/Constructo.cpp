#include "Constructo.h"

Constructo::Constructo()
    : Enemigo("Constructo", 70, 18, 15) {}

void Constructo::Habilidad(Jugador& j) {
    j.RecibirDanio(ataque*0.7);
    j.RecibirDanio(ataque*0.7);
}
