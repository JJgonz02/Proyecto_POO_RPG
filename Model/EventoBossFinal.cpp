#include "EventoBossFinal.h"
#include "JefeFinal.h"
#include "../ControllerRPG/ControladorRPG.h"
#include <iostream>

EventoBossFinal::EventoBossFinal(){}

void EventoBossFinal::Ejecutar(ControladorRPG& ctrl)
{
    std::vector<std::unique_ptr<Enemigo>> lista;
    lista.push_back(std::make_unique<JefeFinal>());
    ctrl.GetVista()->MostrarEvento(Descripcion());
    ctrl.Combate(lista);

    if (ctrl.GetJugador().EstaViva()) {
        ctrl.ConexionFinal();
        std::cout <<
            "\nAl caer el Dios del Trueno, los cielos se abren...\n"
            "Una puerta ancestral despierta al este de la terraza.\n"
            "¡El camino a la Camara del Nido ha sido desbloqueada!\n";
    }
}
