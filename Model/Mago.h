#ifndef RPG_POO_MAGO_H
#define RPG_POO_MAGO_H

#include "Enemigo.h"

class Mago : public Enemigo {
public:
    Mago();
    void Habilidad(Jugador& j) override;
    void Habilidad2(Jugador& j);
};

#endif //RPG_POO_MAGO_H