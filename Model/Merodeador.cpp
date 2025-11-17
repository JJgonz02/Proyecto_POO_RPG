#include "Merodeador.h"

Merodeador::Merodeador()
    : Enemigo("Merodeador de las Ruinas", 30, 10, 10){}

int Merodeador::Habilidad() {
    int aumento = 5;
    ataque += aumento;
    return aumento;
}