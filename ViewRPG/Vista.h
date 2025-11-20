#ifndef RPG_POO_VISTA_H
#define RPG_POO_VISTA_H

#include <vector>
#include "..\Model\Jugador.h"
#include "..\Model\Enemigo.h"
#include "..\Model\Habitacion.h"

class Vista {
public:
    //Leer opción que elija el jugador para cualquier acción
    int LeerOpcionJugador();

    //Métodos para el MenuPrincipal
    void MostrarMenuPrincipal();
    void MostrarStatsJugador(const Jugador& h);

    //Método exploración
    void MostrarHabitacion(std::string Texto);
    void MostrarExploracion(std::string Texto);
    void MostrarConexiones(const Habitacion& h);



    //Métodos para Combate
    void MostrarInicioCombate(const Jugador& h,
                              const std::vector<std::unique_ptr<Enemigo>>& enemigos);
    void MostrarTurnoJugador(const Jugador& h);
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
