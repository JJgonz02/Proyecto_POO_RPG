#ifndef RPG_POO_EQUIPABLE_H
#define RPG_POO_EQUIPABLE_H

#include "Objeto.h"

class Equipable : public Objeto {
private:
    int bonusAtaque;
    int bonusDefensa;

public:
    Equipable(const std::string& n, const std::string& descr,
              int bonusAtk, int bonusDef)
        : Objeto(nombre, descripcion, TipoObjeto::Equipable),
          bonusAtaque(bonusAtk), bonusDefensa(bonusDef) {}

    int GetBonusAtaque() const { return bonusAtaque; }
    int GetBonusDefensa() const { return bonusDefensa; }

    void Usar() override;
};

#endif
