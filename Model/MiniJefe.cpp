#include "MiniJefe.h"

MiniJefe::MiniJefe()
    : Enemigo("Mimic", 320, 58, 32) {}

std::string MiniJefe::Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    int cura = j.RecibirDanio(ataque);
    vida+=cura;
    if (vida>maxVida) {
        vida=maxVida;
    };
    return nombre + "te ataca causando " + std::to_string(cura) + " de daño y curandose a si mismo! y ";
}

std::string MiniJefe::Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    int buff = (rand() % 18) +12;
    ataque+=buff;
    defensa+=buff;
    return nombre + " invoca un aura maldita aumentando sus estadisticas";
}

std::string MiniJefe::Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    int buff = (rand() % 6);
    int i=0;
    int danio = 0;
    for (i; i<buff; i++) {
        danio+= j.RecibirDanio(ataque*0.33);
    }
    return nombre + " te golpeo " + std::to_string(buff) + " veces! causandote " + std::to_string(danio) + " de dano" ;
}
std::string MiniJefe::Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string MiniJefe::Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}

int MiniJefe::NumHabilidades() {
    return 3;
}