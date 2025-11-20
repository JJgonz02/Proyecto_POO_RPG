#ifndef RPG_POO_ENEMIGO_H
#define RPG_POO_ENEMIGO_H

#include "Entidad.h"
#include "Jugador.h"

class Enemigo : public Entidad {
public:
    Enemigo(const std::string& n, int hp, int atk, int def);

    virtual std::string Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) = 0;
    virtual std::string Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) = 0;
    virtual std::string Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) = 0;
    virtual std::string Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) = 0;
    virtual std::string Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) = 0;
    virtual int NumHabilidades() = 0;

};

#endif