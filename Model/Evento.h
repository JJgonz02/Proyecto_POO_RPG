#ifndef RPG_POO_EVENTO_H
#define RPG_POO_EVENTO_H

#include <string>
class ControladorRPG;

class Evento {
public:
    virtual ~Evento() = default;
    virtual std::string Descripcion() const = 0;
    virtual void Ejecutar(ControladorRPG& ctrl) = 0;
};

#endif //RPG_POO_EVENTO_H