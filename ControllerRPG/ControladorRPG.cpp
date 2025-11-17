#include "ControladorRPG.h"
#include "C:\Users\JuanJose\CLionProjects\RPG_POO\Model\Merodeador.h"
#include <iostream>

ControladorRPG::ControladorRPG(Vista* v)
    : vista(v) {}

void ControladorRPG::IniciarJuego() {
    std::string nombreJugador;
    std::cout << "Introduce el nombre de tu heroe: ";
    std::getline(std::cin, nombreJugador);

    if (nombreJugador.empty())
        nombreJugador = "Heroe";
    Jugador heroe(nombreJugador, 75, 8, 12, 20);
    std::vector<std::unique_ptr<Enemigo>> enemigos;
    enemigos.push_back(std::make_unique<Merodeador>());
    Combate(heroe, enemigos);
}


void ControladorRPG::Combate(
        Jugador& heroe,
        std::vector<std::unique_ptr<Enemigo>>& enemigos)
{
    vista->MostrarInicioCombate(heroe, enemigos);

    while (heroe.EstaViva()) {

        bool hayVivos = false;
        for (auto& e : enemigos)
            if (e->EstaViva())
                hayVivos = true;

        if (!hayVivos)
            break;

        vista->MostrarTurnoJugador(heroe);
        int opcion = vista->LeerOpcionJugador();

        if (opcion == 1) {
            int i = vista->ElegirObjetivo(enemigos);
            if (i >= 0 && i < (int)enemigos.size() && enemigos[i]->EstaViva()) {
                int base = heroe.Atacar();
                int real = enemigos[i]->RecibirDanio(base);
                vista->MostrarDanioJugador(real, *enemigos[i]);
            }

        } else if (opcion == 2) {
            int i = vista->ElegirObjetivo(enemigos);
            int base = heroe.AtaqueFuego();
            if (base < 0) vista->MostrarSinMana();
            else {
                int real = enemigos[i]->RecibirDanio(base);
                vista->MostrarDanioJugador(real, *enemigos[i]);
            }

        } else if (opcion == 3) {
        }

        bool todosMuertos = true;
        for (auto& e : enemigos)
            if (e->EstaViva()) todosMuertos = false;

        if (todosMuertos) break;

        for (auto& e : enemigos) {
            if (!e->EstaViva()) continue;

            vista->MostrarTurnoEnemigo(*e);
            int accion = rand() % 101;

            if (accion <= 70) {
                int base = e->Atacar();
                int real = heroe.RecibirDanio(base);
                vista->MostrarDanioEnemigo(*e, real, heroe);

                if (!heroe.EstaViva()) break;
            } else {
                int buff = e->Habilidad();
                vista->MostrarHabilidadEnemigo(*e, buff);
            }
        }
    }

    if (heroe.EstaViva())
        vista->MostrarVictoria();
    else
        vista->MostrarDerrota();
}
