#ifndef RPG_POO_JUGADOR_H
#define RPG_POO_JUGADOR_H

#include "Entidad.h"
#include "Inventario.h"

class Jugador : public Entidad {
private:
    int mana;
    int defensaTemporal;
    Inventario inventario;

public:
    Jugador(const std::string& n, int hp, int atk, int def, int m);

    int Atacar() const override;
    void RecibirDanio(int cantidad) override;

    bool PuedeGastarMana(int costo) const;
    void GastarMana(int costo);
    int GetMana() const;
    void RecuperarMana(int cantidad);

    int AtaqueFuego();
    int CuracionMagica();
    void AplicarBuffDefensa(int aumento);
    void ResetBuffs();

    void CurarJugador(int cantidad);

    Inventario& GetInventario();
};

#endif

