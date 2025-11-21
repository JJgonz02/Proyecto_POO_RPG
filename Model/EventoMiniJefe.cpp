#include "EventoMiniJefe.h"
#include "MiniJefe.h"
#include "../ControllerRPG/ControladorRPG.h"
#include "../Model/ObjetoClave.h"
#include <iostream>

EventoMiniJefe::EventoMiniJefe() {}

void EventoMiniJefe::Ejecutar(ControladorRPG& ctrl) {
    std::vector<std::unique_ptr<Enemigo>> lista;
    lista.push_back(std::make_unique<MiniJefe>());
    ctrl.GetVista()->MostrarEvento(Descripcion());
    ctrl.Combate(lista);

    if (ctrl.GetJugador().EstaViva()) {
        ctrl.GetJugador().GetInventario().Agregar(
            std::make_unique<ObjetoClave>("LlaveBoss", "Abre la puerta hacia el jefe final")
        );
        std::cout <<"Obtienes la Llave Boss";
    }
}
