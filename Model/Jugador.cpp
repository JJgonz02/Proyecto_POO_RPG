#include "Jugador.h"


Jugador::Jugador(const std::string& n, int hp, int atk, int def, int m)
: Entidad(n, hp, atk, def), mana(m), maxMana(m), ataqueReal(atk), defensaReal(def) {}

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
    const int danio = 30*nivel+ataque;
    if (!PuedeGastarMana(costo)) return -1;
    GastarMana(costo);
    return danio;
}

int Jugador::AtaqueFuego() {
    const int costo = 5;
    const int danio = 40*nivel+ataque;
    if (!PuedeGastarMana(costo)) return -1;
    GastarMana(costo);
    return danio;
}

int Jugador::Tornado() {
    const int costo = 8;
    const int danio = 50*nivel+ataque;
    if (!PuedeGastarMana(costo)) return -1;
    GastarMana(costo);
    return danio;
}

int Jugador::Escudo() {
    const int costo = 7;
    const int shield = 15*nivel+defensa;
    if (!PuedeGastarMana(costo)) return -1;
    GastarMana(costo);
    AplicarBuffDefensa(shield);
    return shield;
}

int Jugador::CuracionMagica() {
    const int costo = 3;
    const int cantidad = 20*nivel;
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
    defensa += aumento;
    if (defensa < 1) defensa = 1;
}

void Jugador::AplicarBuffAtaque(int aumento) {
    ataque += aumento;
    if (ataque < 1) ataque = 1;
}

void Jugador::ResetBuffs() {
    ataque = ataqueReal;
    defensa = defensaReal;
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

bool Jugador::SubirDeNivel() {
    const int NumEnemigos = 5;
    enemigosDerrotados++;
    if (enemigosDerrotados >= NumEnemigos) {

        nivel++;

        enemigosDerrotados %= NumEnemigos;

        maxVida += 20;
        vida = maxVida;
        maxMana += 8;
        mana = maxMana;

        ataqueReal += 10;
        defensaReal+= 10;
        ataque += 10;
        defensa+= 10;

        if (nivel==2) {AgregarHabilidad("AtaqueFuego");}
        if (nivel==3) {AgregarHabilidad("Tornado");}
        if (nivel==4) {AgregarHabilidad("Escudo");}
        return true;
    }
    return false;
}
