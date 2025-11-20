#include "Equipable.h"
#include "../Model/Jugador.h"
#include <iostream>

void Equipable::Usar(Jugador& j) {
    j.AplicarBuffAtaque(bonusAtaque);
    j.AplicarBuffDefensa(bonusDefensa);
}

