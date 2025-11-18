#ifndef RPG_POO_GRANARMADURA_H
#define RPG_POO_GRANARMADURA_H

#include "Enemigo.h"

class GranArmadura : public Enemigo {
public:
    GranArmadura();
    void Habilidad(Jugador& j) override;
    void Habilidad2();
};

#endif //RPG_POO_GRANARMADURA_H