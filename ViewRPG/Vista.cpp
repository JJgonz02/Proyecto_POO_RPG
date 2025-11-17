#include "Vista.h"
#include <iostream>

void Vista::MostrarInicioCombate(const Jugador& h,
                                 const std::vector<std::unique_ptr<Enemigo>>& enemigos)
{
    std::cout << "Comienza el combate\n";
    std::cout << h.GetNombre() << " Vida: " << h.GetVida() << "\n\n";

    std::cout << "Enemigos:\n";
    for (size_t i = 0; i < enemigos.size(); i++) {
        std::cout << i << ") " << enemigos[i]->GetNombre();
    }
    std::cout << "\n";
}

void Vista::MostrarTurnoJugador(const Jugador& h) {
    std::cout << "\n //Turno de " << h.GetNombre() << " // \n";
    std::cout << "1) Atacar\n2) Ataque Fuego (5 mana)\n";
    std::cout << "Mana de " << h.GetNombre() << ": "<< h.GetMana();
}

int Vista::LeerOpcionJugador() {
    int opc;
    std::cin >> opc;
    return opc;
}

int Vista::ElegirObjetivo(const std::vector<std::unique_ptr<Enemigo>>& enemigos) {
    std::cout << "Elige un objetivo:\n";
    for (size_t i = 0; i < enemigos.size(); i++)
        if (enemigos[i]->EstaViva())
            std::cout << i << ") " << enemigos[i]->GetNombre();

    int id;
    std::cin >> id;
    return id;
}

void Vista::MostrarDanioJugador(int danio, const Enemigo& e) {
    double porcentaje_vida = (double)e.GetVida() / e.GetMaxVida() * 100;
    std::cout << "Infliges " << danio << " de dano a "
              << e.GetNombre() << ". Vida restante: "
              << (int)porcentaje_vida  << "%" << "\n";
}

void Vista::MostrarTurnoEnemigo(const Enemigo& e) {
    std::cout << "\n// Turno del enemigo (" << e.GetNombre() << ") //\n";
}

void Vista::MostrarDanioEnemigo(const Enemigo& e, int danio, const Jugador& h) {
    std::cout << e.GetNombre() << " te golpea por " << danio << "\n"
              << ". Vida de " << h.GetNombre() << ": " << h.GetVida() << "/" << h.GetMaxVida() << "\n";
}

void Vista::MostrarHabilidadEnemigo(const Enemigo& e, int spc) {
    std::cout << e.GetNombre() << " usa su habilidad. +" << spc
              << " ataque!\n";
}

void Vista::MostrarVictoria() {
    std::cout << "\nVictoria\n";
}

void Vista::MostrarDerrota() {
    std::cout << "\nDerrota...\n";
}

void Vista::MostrarSinMana() {
    std::cout << "No tienes suficiente mana.\n";
}



