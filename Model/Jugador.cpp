#include "Jugador.h"


Jugador::Jugador(const std::string& n, int hp, int atk, int def, int m)
: Entidad(n, hp, atk, def), mana(m), defensaTemporal(0) {}

bool Jugador::PuedeGastarMana(int costo) const { return mana >= costo; }
void Jugador::GastarMana(int costo) { if (mana >= costo) mana -= costo; }
int Jugador::GetMana() const { return mana; }
void Jugador::RecuperarMana(int cantidad) { mana += cantidad; }

int Jugador::AtaqueFuego() {
    const int costo = 5;
    const int danio = 20;
    if (!PuedeGastarMana(costo)) return -1;
    GastarMana(costo);
    return danio;
}

int Jugador::CuracionMagica() {
    const int costo = 3;
    const int cantidad = 15;
    if (!PuedeGastarMana(costo)) return -1;
    GastarMana(costo);
    CurarJugador(cantidad);
    return cantidad;
}

void Jugador::AplicarBuffDefensa(int aumento) {
    defensa += aumento;
    defensaTemporal += aumento;
}

void Jugador::ResetBuffs() {
    if (defensaTemporal > 0) {
        defensa -= defensaTemporal;
        defensaTemporal = 0;
    }
}

void Jugador::CurarJugador(int cantidad) {
    Entidad::Curar(cantidad);
}

Inventario& Jugador::GetInventario() {
    return inventario;
}
