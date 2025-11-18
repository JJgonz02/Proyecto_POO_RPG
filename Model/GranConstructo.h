#ifndef RPG_POO_GRANCONSTRUCTO_H
#define RPG_POO_GRANCONSTRUCTO_H

#include "Enemigo.h"

class GranConstructo : public Enemigo {

public:
    GranConstructo();
    void Habilidad(Jugador& j) override;
};

#endif //RPG_POO_GRANCONSTRUCTO_H