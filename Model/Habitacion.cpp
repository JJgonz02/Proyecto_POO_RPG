#include "Habitacion.h"

Habitacion::Habitacion(int id,const std::string& descripcion,const std::string& textoExploracion)
        : id(id),descripcion(descripcion), textoExploracion(textoExploracion),explorada(false),enemigosDerrotados(false)
{
    for (int i = 0; i < 4; i++)
        conexiones[i] = nullptr;
}

int Habitacion::GetID() const {
    return id;
}

const std::string& Habitacion::GetDescripcion() const {
    return descripcion;
}

const std::string& Habitacion::GetTextoExploracion() const {
    return textoExploracion;
}

bool Habitacion::TieneEnemigos() const {
    return !enemigosDerrotados && !enemigos.empty();
}

bool Habitacion::EnemigosDerrotados() const {
    return enemigosDerrotados;
}

bool Habitacion::EstaExplorada() const {
    return explorada;
}

void Habitacion::SetConexion(int indice, Habitacion* hab) {
    if (indice >= 0 && indice < 4)
        conexiones[indice] = hab;
}

Habitacion* Habitacion::GetConexion(int indice) const {
    if (indice >= 0 && indice < 4)
        return conexiones[indice];
    return nullptr;
}

void Habitacion::AgregarEnemigo(std::unique_ptr<Enemigo> e) {
    enemigos.push_back(std::move(e));
}

std::vector<std::unique_ptr<Enemigo>>& Habitacion::GetEnemigos() {
    return enemigos;
}

void Habitacion::MarcarExplorada() {
    explorada = true;
}

void Habitacion::MarcarEnemigosDerrotados() {
    enemigosDerrotados = true;
}

void Habitacion::AsignarEvento(std::unique_ptr<Evento> ev) {
    evento = std::move(ev);
}

bool Habitacion::TieneEvento() const {
    return (bool)evento;
}

Evento* Habitacion::GetEvento() {
    return evento.get();
}