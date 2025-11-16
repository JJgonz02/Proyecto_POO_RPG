#ifndef RPG_POO_INVENTARIO_H
#define RPG_POO_INVENTARIO_H

#include <vector>
#include <memory>
#include "Objeto.h"

class Inventario {
private:
    std::vector<std::unique_ptr<Objeto>> objetos;

public:
    Inventario() = default;

    void Agregar(std::unique_ptr<Objeto> obj);
    void Eliminar(size_t index);
    Objeto* Get(size_t index);
    size_t Cantidad() const;
    void Listar() const;
};

#endif
