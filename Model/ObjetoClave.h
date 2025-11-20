#include "Objeto.h"

class ObjetoClave : public Objeto {
public:
    ObjetoClave(const std::string& nombre, const std::string& descripcion)
        : Objeto(nombre, descripcion, TipoObjeto::Clave) {}

    void Usar(Jugador& j) override;
};
