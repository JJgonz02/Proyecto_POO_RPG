#ifndef RPG_POO_EVENTOFINAL_H
#define RPG_POO_EVENTOFINAL_H

#include "Evento.h"
#include <vector>
#include <memory>

class EventoFinal : public Evento {
private:
public:
    EventoFinal();

    std::string Descripcion() const override {
        return "Gracias por Jugar!";
    }

    void Ejecutar(ControladorRPG& ctrl) override;
};

#endif //RPG_POO_EVENTOFINAL_H