#include "Mago.h"

Mago::Mago()
    : Enemigo("Mago Esqueleto", 30, 25, 35) {}

std::string Mago::Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    j.AplicarBuffDefensa(-3);
    j.AplicarBuffAtaque(-3);
    return nombre + "te hechiza, ataque y defensa reducidos!";
}

std::string Mago::Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    int cura = j.RecibirDanio(ataque);
    vida+=cura;
    if (vida>maxVida) {
        vida=maxVida;
    };
    return nombre + "te ataca causando " + std::to_string(cura) + " de daño y curandose a si mismo! y ";
}

std::string Mago::Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Mago::Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string Mago::Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}

int Mago::NumHabilidades() {
    return 2;
}
