#ifndef RPG_POO_OBJETO_H
#define RPG_POO_OBJETO_H


#include <string>

class Jugador;

enum class TipoObjeto {Consumible, Equipable, Clave};

class Objeto {
protected:
    std::string nombre;
    std::string descripcion;
    TipoObjeto tipo;

public:
    Objeto(const std::string& n, const std::string& d, TipoObjeto t);
    const std::string& GetNombre() const;
    const std::string& GetDescripcion() const;
    TipoObjeto GetTipo() const;

    virtual void Usar(Jugador& j) = 0;
};

#endif
