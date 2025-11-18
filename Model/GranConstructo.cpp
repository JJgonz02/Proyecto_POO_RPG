#include "GranConstructo.h"

GranConstructo::GranConstructo()
    : Enemigo("Gran Constructo", 180, 15, 45) {}

void GranConstructo::Habilidad(Jugador& j) {
    defensa += 8;
}
