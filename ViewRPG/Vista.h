#ifndef RPG_POO_VISTA_H
#define RPG_POO_VISTA_H

#include "C:\Users\JuanJose\CLionProjects\RPG_POO\Model\Jugador.h"
#include "C:\Users\JuanJose\CLionProjects\RPG_POO\Model\Enemigo.h"

class Vista {
public:
    void MostrarInicioCombate(const Jugador& j, const Enemigo& e);
    void MostrarTurnoJugador(const Jugador& j);
    void MostrarDanioJugador(int danio, const Enemigo& e);

    void MostrarTurnoEnemigo(const Enemigo& e);
    void MostrarDanioEnemigo(const Enemigo& e, int danio, const Jugador& j);
    void MostrarHabilidadEnemigo(const Enemigo& e, int buff);

    void MostrarVictoria();
    void MostrarDerrota();
};

#endif
