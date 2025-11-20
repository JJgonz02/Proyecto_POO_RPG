#ifndef RPG_POO_CONSTRUCTO_H
#define RPG_POO_CONSTRUCTO_H

#include "Enemigo.h"

class Constructo : public Enemigo {
public:
    Constructo();
    std::string Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;

    int NumHabilidades() override;
};

#endif //RPG_POO_CONSTRUCTO_H