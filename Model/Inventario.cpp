#include "Inventario.h"
#include <iostream>

void Inventario::Agregar(std::unique_ptr<Objeto> obj) {
    objetos.push_back(std::move(obj));
}

void Inventario::Eliminar(size_t index) {
    if (index < objetos.size()) {
        objetos.erase(objetos.begin() + index);
    }
}

Objeto* Inventario::Get(size_t index) {
    if (index < objetos.size()) {
        return objetos[index].get();
    }
    return nullptr;
}

size_t Inventario::Cantidad() const {
    return objetos.size();
}

void Inventario::Listar() const {
    for (size_t i = 0; i < objetos.size(); i++) {
        std::cout << i+1 << ") "
                  << objetos[i]->GetNombre() << " - "
                  << objetos[i]->GetDescripcion() << "\n";
    }
}

bool Inventario::TieneClave(const std::string& nombre) const {
    for (const auto& obj : objetos) {
        if (obj->GetTipo() == TipoObjeto::Clave &&
            obj->GetNombre() == nombre) {
            return true;
            }
    }
    return false;
}


