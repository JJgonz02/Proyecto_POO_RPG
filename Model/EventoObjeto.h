#ifndef EVENTOOBJETO_H
#define EVENTOOBJETO_H

#include "Evento.h"
#include <memory>
#include "Objeto.h"

class EventoObjeto : public Evento {
private:
    std::unique_ptr<Objeto> objeto;

public:
    EventoObjeto(std::unique_ptr<Objeto> obj);

    std::string Descripcion() const override {
        return "Encuentras un objeto: " + objeto->GetNombre();
    }

    void Ejecutar(ControladorRPG& ctrl) override;
};

#endif
