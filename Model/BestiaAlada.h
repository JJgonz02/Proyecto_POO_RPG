#ifndef RPG_POO_BESTIAALADA_H
#define RPG_POO_BESTIAALADA_H

#include "Enemigo.h"

class BestiaAlada : public Enemigo {
public:
    BestiaAlada();
    std::string Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;

    int NumHabilidades() override;
};

#endif //RPG_POO_BESTIAALADA_H