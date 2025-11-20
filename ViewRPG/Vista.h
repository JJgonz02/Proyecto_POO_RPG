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
    void MostrarOpcionInvalida();

    //Métodos para el MenuPrincipal
    void MostrarMenuPrincipal();
    void MostrarStatsJugador(const Jugador& j);

    //Método exploración
    void MostrarHabitacion(const std::string& Texto);
    void MostrarExploracion(const std::string& Texto);
    void MostrarConexiones(const Habitacion& h);

    //Métodos Inventario
    void MostrarInventario(const Inventario& inv) const;
    int LeerOpcionInventario(int max) const;
    int ElegirObjeto(int max) const;

    void MostrarInventarioVacio() const;
    void MostrarObjetoUsado(const std::string& nombre) const;
    void MostrarObjetoClaveNoUsable() const;


    //Métodos para Combate
    void MostrarInicioCombate(const Jugador& j, const std::vector<std::unique_ptr<Enemigo>>& enemigos);
    void MostrarTurnoJugador(const Jugador& j);
    int ElegirObjetivo(const std::vector<std::unique_ptr<Enemigo>>& enemigos);
    void MostrarDanioJugador(int danio, const Enemigo& e);
    void MostrarHabilidadesJugador(const Jugador& j, std::string Habilidad);
    void MostrarCuracionJugador(const Jugador& j);
    void MostrarBuffAtkJugador(int atk);
    void MostrarBuffDefJugador(int def);
    void MostrarTurnoEnemigo(const Enemigo& e);
    void MostrarDanioEnemigo(const Enemigo& e, int danio, const Jugador& j);
    void MostrarHabilidadEnemigo(const Enemigo& e,const std::string& Texto);
    void MostrarVictoria();
    void MostrarDerrota();
    void MostrarSinMana();
};

#endif
