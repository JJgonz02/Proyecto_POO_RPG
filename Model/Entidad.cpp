#include "Entidad.h"

Entidad::Entidad(const std::string& n, int hp, int atk, int def)
    : nombre(n), vida(hp), maxVida(hp), ataque(atk), defensa(def), vivo(true) {}

void Entidad::RecibirDanio(int cantidad) {
    int danioFinal = cantidad*(10/defensa);
    if (danioFinal < 1) danioFinal = 1;
    vida -= danioFinal;
    if (vida <= 0) { vida = 0; vivo = false; }
}

void Entidad::Curar(int cantidad) {
    if (cantidad <= 0) return;
    vida += cantidad;
    if (vida > maxVida) vida = maxVida;
}

const std::string& Entidad::GetNombre() const { return nombre; }
int Entidad::GetVida() const { return vida; }
int Entidad::GetMaxVida() const { return maxVida; }
int Entidad::GetAtaque() const { return ataque; }
int Entidad::GetDefensa() const { return defensa; }
bool Entidad::EstaViva() const { return vivo; }

