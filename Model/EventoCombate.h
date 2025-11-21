#ifndef RPG_POO_EVENTOCOMBATE_H
#define RPG_POO_EVENTOCOMBATE_H

#include "Evento.h"
#include "../Model/Enemigo.h"
#include <vector>
#include <memory>

class EventoCombate : public Evento {
private:
    std::vector<std::unique_ptr<Enemigo>> enemigos;

public:
    EventoCombate(std::vector<std::unique_ptr<Enemigo>> lista);

    std::string Descripcion() const override {
        return "Eres atacado!";
    }

    void Ejecutar(ControladorRPG& ctrl) override;
};


#endif //RPG_POO_EVENTOCOMBATE_H