#ifndef RPG_POO_CONSUMIBLE_H
#define RPG_POO_CONSUMIBLE_H

#include "Objeto.h"

class Consumible : public Objeto {
private:
    int curaVida;
    int sumaMana;

public:
    Consumible(const std::string& n, const std::string& descr,
               int curaVida, int sumaMana)
        : Objeto(nombre, descripcion, TipoObjeto::Consumible),
          curaVida(curaVida), sumaMana(sumaMana) {}

    int GetCuraVida() const { return curaVida; }
    int GetsumaMana() const { return sumaMana; }

    void Usar() override;
};

#endif
