#include "Vista.h"
#include <iostream>

void Vista::MostrarInicioCombate(const Jugador& j, const Enemigo& e) {
    std::cout << "Combate: " << j.GetNombre() << " vs " << e.GetNombre() << "\n";
}

void Vista::MostrarTurnoJugador(const Jugador& j) {
    std::cout << "\nTurno del jugador (" << j.GetNombre() << ")\n";
}

void Vista::MostrarDanioJugador(int danio, const Enemigo& e) {
    std::cout << "Infliges " << danio << " de dano a " << e.GetNombre()
              << ". Vida enemiga: " << e.GetVida() << "\n";
}

void Vista::MostrarTurnoEnemigo(const Enemigo& e) {
    std::cout << "\nTurno del enemigo (" << e.GetNombre() << ")\n";
}

void Vista::MostrarDanioEnemigo(const Enemigo& e, int danio, const Jugador& j) {
    std::cout << e.GetNombre() << " te golpea y hace "
              << danio << ". Vida del heroe: " << j.GetVida() << "\n";
}

void Vista::MostrarHabilidadEnemigo(const Enemigo& e, int buff) {
    std::cout << e.GetNombre() << " usa su habilidad. Ataque +" << buff << "\n";
}

void Vista::MostrarVictoria() {
    std::cout << "\nEl heroe gana.\n";
}

void Vista::MostrarDerrota() {
    std::cout << "\nEl enemigo gana.\n";
}


