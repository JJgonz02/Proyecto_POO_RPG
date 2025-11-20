#include "..\Proyecto_POO_RPG\ControllerRPG\ControladorRPG.h"
#include "..\Proyecto_POO_RPG\ViewRPG/Vista.h"

int main() {
    Vista vista;
    ControladorRPG controlador(&vista);
    controlador.IniciarJuego();

    return 0;
}