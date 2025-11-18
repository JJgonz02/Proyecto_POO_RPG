#ifndef RPG_POO_ESTATUA_H
#define RPG_POO_ESTATUA_H

#include "Enemigo.h"

class Estatua : public Enemigo {
public:
    Estatua();
    void Habilidad(Jugador& j) override;
    void Habilidad2(std::vector<Enemigo*>& aliados);
};

#endif //RPG_POO_ESTATUA_H