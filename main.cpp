#include "..\RPG_POO\ControllerRPG\ControladorRPG.h"
#include "..\RPG_POO\ViewRPG/Vista.h"

int main() {
    Vista vista;
    ControladorRPG controlador(&vista);
    controlador.IniciarJuego();

    return 0;
}