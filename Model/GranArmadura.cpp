#include "GranArmadura.h"

GranArmadura::GranArmadura()
    : Enemigo("Gran Armadura", 120, 20, 28) {}

void GranArmadura::Habilidad(Jugador& j) {
    j.GastarMana(5);
    j.RecibirDanio(ataque);
}

void GranArmadura::Habilidad2() {
    int buff = (rand() % 11) +8;
    ataque+=buff;
}