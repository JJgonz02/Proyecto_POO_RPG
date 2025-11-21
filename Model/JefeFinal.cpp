#include "JefeFinal.h"

JefeFinal::JefeFinal()
    : Enemigo("Dios del Trueno - Dragon Ancestral", 500, 70, 60) {}

std::string JefeFinal::Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    int mult = (rand() % 11);
    j.GastarMana(mult);
    ataque+=mult*1.5;
    return nombre + " se apodera de tu energia magica y con ella aumenta su propio ataque" ;
}

std::string JefeFinal::Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    int mult = (rand() % 3);
    int danio = j.RecibirDanio(ataque*mult);
    return nombre + " hace caer rayos desde el cielo haciendote " + std::to_string(danio) + " de dano" ;
}

std::string JefeFinal::Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    j.ResetBuffs();
    return nombre + " penetra en tu mismo ser y te devuelve a tu esencia mas pura, todas las modificaciones de estadisticas se deshacen" ;
}
std::string JefeFinal::Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    int cura = (rand() % 11)*10;
    for (auto& e : aliados) {
        if (e && e->EstaViva())
            e->Curar(cura);
    }
    return nombre + " se concentra profundamente y recupera buena parte de su fuerza vital";
}
std::string JefeFinal::Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    int cont = (rand() % 9);
    int i=0;
    for (i;i<cont;i++) {
        j.CurarJugador(-10);
    }
    return nombre + " sopla un viento helado que poco a poco te hace 0 de daño " + std::to_string(cont) + " veces!" ;
}

int JefeFinal::NumHabilidades() {
    return 5;
}