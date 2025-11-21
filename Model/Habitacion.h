#ifndef RPG_POO_HABITACION_H
#define RPG_POO_HABITACION_H

#include "Enemigo.h"
#include "Evento.h"
#include <vector>
#include <memory>

class Habitacion {
private:
    int id;
    std::string descripcion;
    std::string textoExploracion;
    bool explorada;
    bool enemigosDerrotados;

    Habitacion* conexiones[4];

    std::vector<std::unique_ptr<Enemigo>> enemigos;
    std::unique_ptr<Evento> evento;

public:
    Habitacion(int id,
               const std::string& descripcion,
               const std::string& textoExploracion);

    int GetID() const;
    const std::string& GetDescripcion() const;
    const std::string& GetTextoExploracion() const;

    bool TieneEnemigos() const;
    bool EnemigosDerrotados() const;
    bool EstaExplorada() const;

    void SetConexion(int indice, Habitacion* hab);
    Habitacion* GetConexion(int indice) const;

    void AgregarEnemigo(std::unique_ptr<Enemigo> e);
    std::vector<std::unique_ptr<Enemigo>>& GetEnemigos();

    void MarcarExplorada();
    void MarcarEnemigosDerrotados();
    void AsignarEvento(std::unique_ptr<Evento> ev);
    bool TieneEvento() const;
    Evento* GetEvento();
};

#endif //RPG_POO_HABITACION_H