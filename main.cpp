#include "..\PROYECTO_POO_RPG\ControllerRPG\ControladorRPG.h"
#include "..\PROYECTO_POO_RPG\ViewRPG/Vista.h"

int main() {
    Vista vista;
    ControladorRPG controlador(&vista);
    controlador.IniciarJuego();

    return 0;
}