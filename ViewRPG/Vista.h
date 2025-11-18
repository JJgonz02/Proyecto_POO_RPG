#ifndef RPG_POO_VISTA_H
#define RPG_POO_VISTA_H

#include <vector>
#include "..\Model\Jugador.h"
#include "..\Model\Enemigo.h"

class Vista {
public:
    void MostrarInicioCombate(const Jugador& heroe,
                              const std::vector<std::unique_ptr<Enemigo>>& enemigos);

    void MostrarTurnoJugador(const Jugador& h);
    int LeerOpcionJugador();

    int ElegirObjetivo(const std::vector<std::unique_ptr<Enemigo>>& enemigos);

    void MostrarDanioJugador(int danio, const Enemigo& e);

    void MostrarTurnoEnemigo(const Enemigo& e);
    void MostrarDanioEnemigo(const Enemigo& e, int danio, const Jugador& h);

    void MostrarHabilidadEnemigo(const Enemigo& e, int spc);

    void MostrarVictoria();
    void MostrarDerrota();

    void MostrarSinMana();
};

#endif
