#ifndef RPG_POO_JUGADOR_H
#define RPG_POO_JUGADOR_H

#include "Entidad.h"
#include "Inventario.h"

class Jugador : public Entidad {
private:
    int maxMana;
    int mana;
    int defensaTemporal;
    int ataqueTemporal;
    Inventario inventario;

public:
    Jugador(const std::string& n, int hp, int atk, int def, int m);

    bool PuedeGastarMana(int costo) const;
    void GastarMana(int costo);
    int GetMana() const;
    int GetMaxMana() const;
    void RecuperarMana(int cantidad);

    int AtaqueFuego();
    int CuracionMagica();
    void AplicarBuffDefensa(int aumento);
    void AplicarBuffAtaque(int aumento);
    void ResetBuffs();

    void CurarJugador(int cantidad);

    Inventario& GetInventario();
};

#endif

