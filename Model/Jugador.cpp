#include "Jugador.h"


Jugador::Jugador(const std::string& n, int hp, int atk, int def, int m)
: Entidad(n, hp, atk, def), mana(m), maxMana(m), defensaTemporal(0), ataqueTemporal(0) {}

bool Jugador::PuedeGastarMana(int costo) const { return mana >= costo; }
void Jugador::GastarMana(int costo) { if (mana >= costo) mana -= costo; }
int Jugador::GetMana() const { return mana; }
int Jugador::GetMaxMana() const { return maxMana; }
void Jugador::RecuperarMana(int cantidad) {
    mana += cantidad;
    if (mana > maxMana) mana = maxMana;
}

int Jugador::GranEspadazo() {
    const int costo = 3;
    const int danio = 40;
    if (!PuedeGastarMana(costo)) return -1;
    GastarMana(costo);
    return danio;
}

int Jugador::AtaqueFuego() {
    const int costo = 5;
    const int danio = 60;
    if (!PuedeGastarMana(costo)) return -1;
    GastarMana(costo);
    return danio;
}

int Jugador::Tornado() {
    const int costo = 8;
    const int danio = 80;
    if (!PuedeGastarMana(costo)) return -1;
    GastarMana(costo);
    return danio;
}

int Jugador::Escudo() {
    const int costo = 7;
    const int shield = 25;
    if (!PuedeGastarMana(costo)) return -1;
    GastarMana(costo);
    AplicarBuffDefensa(shield);
    return shield;
}

int Jugador::CuracionMagica() {
    const int costo = 3;
    const int cantidad = 30;
    if (!PuedeGastarMana(costo)) return -1;
    GastarMana(costo);
    CurarJugador(cantidad);
    return cantidad;
}

void Jugador::AgregarHabilidad(const std::string& h) {
    habilidades.push_back(h);
}

const std::vector<std::string>& Jugador::GetHabilidades() const {
    return habilidades;
}

void Jugador::AplicarBuffDefensa(int aumento) {
    int defensa_prebuff = defensa;
    defensa += aumento;
    if (defensa < 1) defensa = 1;
    int buff = defensa - defensa_prebuff;
    defensaTemporal += buff;
}

void Jugador::AplicarBuffAtaque(int aumento) {
    int ataque_prebuff = ataque;
    ataque += aumento;
    if (ataque < 1) ataque = 1;
    int buff = ataque - ataque_prebuff;
    ataqueTemporal += buff;
}

void Jugador::ResetBuffs() {
    if (defensaTemporal > 0) {
        defensa -= defensaTemporal;
        defensaTemporal = 0;
    }
    if (ataqueTemporal > 0) {
        ataque -= ataqueTemporal;
        ataqueTemporal = 0;
    }
}

void Jugador::CurarJugador(int cantidad) {
    Entidad::Curar(cantidad);
}


Inventario& Jugador::GetInventario() {
    return inventario;
}

bool Jugador::TieneObjetoClave(const std::string &nombre) {
    return inventario.TieneClave(nombre);
}

