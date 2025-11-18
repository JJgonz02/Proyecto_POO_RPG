#include "Mago.h"

Mago::Mago()
    : Enemigo("Mago Esqueleto", 30, 20, 30) {}

void Mago::Habilidad(Jugador& j) {
    j.AplicarBuffDefensa(-3);
    j.AplicarBuffAtaque(-3);
}

void Mago::Habilidad2(Jugador& j) {
    int cura = j.RecibirDanio(ataque);
    if (cura == 0) return;
    vida+=cura;
    if (vida>maxVida) {
        vida=maxVida;
    };
}
