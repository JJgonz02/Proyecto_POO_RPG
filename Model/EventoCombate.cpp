#include "EventoCombate.h"
#include "../ControllerRPG/ControladorRPG.h"

EventoCombate::EventoCombate(std::vector<std::unique_ptr<Enemigo>> lista)
        : enemigos(std::move(lista)) {}

void EventoCombate::Ejecutar(ControladorRPG& ctrl) {
    ctrl.GetVista()->MostrarEvento(Descripcion());
    ctrl.Combate(enemigos);
}
