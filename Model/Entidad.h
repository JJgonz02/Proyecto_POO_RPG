#ifndef RPG_POO_ENTIDAD_H
#define RPG_POO_ENTIDAD_H

#include <string>

class Entidad {
protected:
    std::string nombre;
    int vida;
    int maxVida;
    int ataque;
    int defensa;
    bool vivo;

public:
    Entidad(const std::string& n, int hp, int atk, int def);

    virtual ~Entidad() = default;

    int Atacar() const;
    virtual int RecibirDanio(int cantidad);
    virtual void Curar(int cantidad);

    // Getters
    const std::string& GetNombre() const;
    int GetVida() const;
    int GetMaxVida() const;
    int GetAtaque() const;
    int GetDefensa() const;
    bool EstaViva() const;
};

#endif

