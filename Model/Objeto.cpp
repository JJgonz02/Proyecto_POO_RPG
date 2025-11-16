#include "Objeto.h"


Objeto::Objeto(const std::string& n, const std::string& d, TipoObjeto t)
: nombre(n), descripcion(d), tipo(t) {}


const std::string& Objeto::GetNombre() const { return nombre; }
const std::string& Objeto::GetDescripcion() const { return descripcion; }
TipoObjeto Objeto::GetTipo() const { return tipo; }