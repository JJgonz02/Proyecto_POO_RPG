#ifndef RPG_POO_CONTROLADORRPG_H
#define RPG_POO_CONTROLADORRPG_H

#include "..\Model\Enemigo.h"
#include "..\Model\Habitacion.h"
#include "..\Model\Jugador.h"
#include "..\ViewRPG\Vista.h"

class ControladorRPG {
private:
    Vista* vista;

public:
    ControladorRPG(Vista* v);

    Habitacion* CrearMapa();
    void IniciarJuego();
    void Combate(Jugador& heroe, std::vector<std::unique_ptr<Enemigo>>& enemigos);
};

#endif
