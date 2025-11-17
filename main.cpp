#include "C:\Users\JuanJose\CLionProjects\RPG_POO\ControllerRPG\ControladorRPG.h"
#include "C:\Users\JuanJose\CLionProjects\RPG_POO\ViewRPG\Vista.h"

int main() {
    Vista vista;
    ControladorRPG controlador(&vista);
    controlador.CombatePrueba();

    return 0;
}