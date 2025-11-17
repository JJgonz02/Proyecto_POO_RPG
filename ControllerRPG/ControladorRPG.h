#ifndef RPG_POO_CONTROLADORRPG_H
#define RPG_POO_CONTROLADORRPG_H

#include "C:\Users\JuanJose\CLionProjects\RPG_POO\Model\Jugador.h"
#include "C:\Users\JuanJose\CLionProjects\RPG_POO\Model\Merodeador.h"
#include "C:\Users\JuanJose\CLionProjects\RPG_POO\ViewRPG\Vista.h"

class ControladorRPG {
private:
    Vista* vista;

public:
    ControladorRPG(Vista* v);

    void CombatePrueba();
};

#endif
