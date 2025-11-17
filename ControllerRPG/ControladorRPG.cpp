#include "ControladorRPG.h"
#include <cstdlib>

ControladorRPG::ControladorRPG(Vista* v)
    : vista(v) {}

void ControladorRPG::CombatePrueba() {
    Jugador heroe("Heroe", 75, 15, 12, 15);
    Merodeador enemigo;

    vista->MostrarInicioCombate(heroe, enemigo);

    while (heroe.EstaViva() && enemigo.EstaViva()) {

        vista->MostrarTurnoJugador(heroe);
        int danioHeroe = heroe.Atacar();
        int danioFinal = enemigo.RecibirDanio(danioHeroe);
        vista->MostrarDanioJugador(danioFinal, enemigo);

        if (!enemigo.EstaViva()) break;

        vista->MostrarTurnoEnemigo(enemigo);

        int accion = rand() % 101;
        if (accion <= 40) {
            int danioEnemigo = enemigo.Atacar();
            int danioFinal = heroe.RecibirDanio(danioEnemigo);
            vista->MostrarDanioEnemigo(enemigo, danioFinal, heroe);
        } else {
            int buff = enemigo.Habilidad();
            vista->MostrarHabilidadEnemigo(enemigo, buff);
        }
    }

    if (heroe.EstaViva())
        vista->MostrarVictoria();
    else
        vista->MostrarDerrota();
}
