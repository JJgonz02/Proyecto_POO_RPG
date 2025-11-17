#ifndef RPG_POO_MERODEADOR_H
#define RPG_POO_MERODEADOR_H

#include "Enemigo.h"

class Merodeador : public Enemigo {
public:
    Merodeador();

    int Habilidad() override;
};

#endif //RPG_POO_MERODEADOR_H