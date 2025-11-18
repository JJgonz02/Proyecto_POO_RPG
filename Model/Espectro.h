#ifndef RPG_POO_ESPECTRO_H
#define RPG_POO_ESPECTRO_H

#include "Enemigo.h"

class Espectro : public Enemigo {
public:
    Espectro();
    void Habilidad(Jugador& j) override;
};

#endif //RPG_POO_ESPECTRO_H