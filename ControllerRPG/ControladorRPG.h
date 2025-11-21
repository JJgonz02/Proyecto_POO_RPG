#ifndef RPG_POO_CONTROLADORRPG_H
#define RPG_POO_CONTROLADORRPG_H

#include "..\Model\Enemigo.h"
#include "..\Model\Habitacion.h"
#include "..\Model\Jugador.h"
#include "..\ViewRPG\Vista.h"

class ControladorRPG {
private:
    Vista* vista;
    std::vector<std::unique_ptr<Habitacion>> hab;
    int habitacionActual;
    Jugador jugador;


public:
    ControladorRPG(Vista* v);
    Jugador& GetJugador();
    Vista* GetVista();
    void ConexionFinal();



    void CrearMapa();
    void IniciarJuego();
    bool MenuPrincipal();

    void ExplorarHabitacion();
    void MoverHabitacion();
    void MostrarStatsJugador();
    bool AbrirInventario();
    void UsarObjetoInventario();


    void Combate(std::vector<std::unique_ptr<Enemigo>>& enemigos);
    bool EjecutarHabilidadJugador(int index, int objetivo, std::vector<std::unique_ptr<Enemigo>>& enemigos);
    void EjecutarHabilidadEnemigo(Enemigo& e, std::vector<std::unique_ptr<Enemigo>>& enemigos);
};


#endif
