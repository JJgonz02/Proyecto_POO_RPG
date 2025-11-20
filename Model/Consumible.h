#ifndef RPG_POO_CONSUMIBLE_H
#define RPG_POO_CONSUMIBLE_H

#include "Objeto.h"
#include "Jugador.h"

class Consumible : public Objeto {
private:
    int curaVida;
    int sumaMana;

public:
    Consumible(const std::string& n, const std::string& d, int cv, int sm);

    void Usar(Jugador& j) override;
};

#endif
