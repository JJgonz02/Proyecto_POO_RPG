#include "Consumible.h"
#include "Jugador.h"
#include <iostream>

Consumible::Consumible(const std::string& n, const std::string& d, int cv, int sm)
    : Objeto(n, d, TipoObjeto::Consumible),
      curaVida(cv),
      sumaMana(sm) {}

void Consumible::Usar(Jugador& j) {
    j.CurarJugador(curaVida);
    j.RecuperarMana(sumaMana);
}

