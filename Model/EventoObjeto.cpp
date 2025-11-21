#include "EventoObjeto.h"
#include "../ControllerRPG/ControladorRPG.h"

EventoObjeto::EventoObjeto(std::unique_ptr<Objeto> obj)
        : objeto(std::move(obj)) {}

void EventoObjeto::Ejecutar(ControladorRPG& ctrl) {
    ctrl.GetVista()->MostrarEvento(Descripcion());
    ctrl.GetJugador().GetInventario().Agregar(std::move(objeto));

}

