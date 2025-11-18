#ifndef RPG_POO_CONSTRUCTO_H
#define RPG_POO_CONSTRUCTO_H

#include "Enemigo.h"

class Constructo : public Enemigo {
public:
    Constructo();
    void Habilidad(Jugador& j) override;
};

#endif //RPG_POO_CONSTRUCTO_H