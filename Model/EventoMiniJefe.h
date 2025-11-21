#ifndef RPG_POO_EVENTOMINIJ_H
#define RPG_POO_EVENTOMINIJ_H

#include "Evento.h"
#include "../Model/Enemigo.h"
#include <vector>
#include <memory>

class EventoMiniJefe : public Evento {
private:
    std::vector<std::unique_ptr<Enemigo>> enemigos;

public:
    EventoMiniJefe();

    std::string Descripcion() const override {
        return "MiniJefe Mimic se abalanza sobre ti!!!";
    }

    void Ejecutar(ControladorRPG& ctrl) override;
};

#endif

