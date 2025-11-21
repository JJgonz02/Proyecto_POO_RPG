#include "EventoFinal.h"
#include <cstdlib>
#include "../ControllerRPG/ControladorRPG.h"

EventoFinal::EventoFinal(){}

void EventoFinal::Ejecutar(ControladorRPG& ctrl) {
    ctrl.GetVista()->MostrarEvento(Descripcion());
    std::exit(0);
}