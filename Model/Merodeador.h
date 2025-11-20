#ifndef RPG_POO_MERODEADOR_H
#define RPG_POO_MERODEADOR_H

#include "Enemigo.h"

class Merodeador : public Enemigo {
public:
    Merodeador();
    std::string Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;
    std::string Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) override;

    int NumHabilidades() override;

};

#endif //RPG_POO_MERODEADOR_H