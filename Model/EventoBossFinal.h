#ifndef RPG_POO_EVENTOBOSSFINAL_H
#define RPG_POO_EVENTOBOSSFINAL_H

#include "Evento.h"
#include "../Model/Enemigo.h"

class EventoBossFinal : public Evento {
private:

public:
    EventoBossFinal();

    std::string Descripcion() const override {
        return "La presencia del dios del trueno se manifiesta ante ti...";
    }

    void Ejecutar(ControladorRPG& ctrl) override;
};

#endif
