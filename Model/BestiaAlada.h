#ifndef RPG_POO_BESTIAALADA_H
#define RPG_POO_BESTIAALADA_H

#include "Enemigo.h"

class BestiaAlada : public Enemigo {
public:
    BestiaAlada();
    void Habilidad(Jugador& j) override;
};

#endif //RPG_POO_BESTIAALADA_H