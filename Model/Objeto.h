#ifndef RPG_POO_OBJETO_H
#define RPG_POO_OBJETO_H


#include <string>


enum class TipoObjeto {Consumible, Equipable};

class Objeto {
protected:
    std::string nombre;
    std::string descripcion;
    TipoObjeto tipo;

public:
    Objeto(const std::string& n, const std::string& d, TipoObjeto t);
    virtual ~Objeto() = default;

    const std::string& GetNombre() const;
    const std::string& GetDescripcion() const;
    TipoObjeto GetTipo() const;

    virtual void Usar() = 0;
};

#endif
