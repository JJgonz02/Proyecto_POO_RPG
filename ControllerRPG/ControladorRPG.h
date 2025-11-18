#ifndef RPG_POO_CONTROLADORRPG_H
#define RPG_POO_CONTROLADORRPG_H

#include "C:\Users\JuanJose\CLionProjects\RPG_POO\Model\Jugador.h"
#include "C:\Users\JuanJose\CLionProjects\RPG_POO\Model\Enemigo.h"
#include "C:\Users\JuanJose\CLionProjects\RPG_POO\ViewRPG\Vista.h"
#include "C:\Users\JuanJose\CLionProjects\RPG_POO\Model\Habitacion.h"

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
