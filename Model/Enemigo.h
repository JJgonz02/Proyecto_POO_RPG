#ifndef RPG_POO_ENEMIGO_H
#define RPG_POO_ENEMIGO_H

#include "Entidad.h"
#include "Jugador.h"

class Enemigo : public Entidad {
public:
    Enemigo(const std::string& n, int hp, int atk, int def);

    virtual void Habilidad(Jugador& j) = 0;

};

#endif