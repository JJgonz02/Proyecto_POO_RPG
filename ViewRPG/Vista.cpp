#include "Vista.h"
#include <iostream>
//Leer opción que elija el jugador para cualquier acción
int Vista::LeerOpcionJugador() {
    int opc;
    std::cin >> opc;
    return opc;
}

//Métodos para el MenuPrincipal
void Vista::MostrarMenuPrincipal() {
    std::cout << "// Acciones //\n" ;
    std::cout << "1) Explorar habitacion\n 2) Ir a otra habitacion\n 3) Ver estadisticas\n"
                 " 4) Ver inventario \n 5)Salir a pantalla de inicio" ;
}
void Vista::MostrarStatsJugador(const Jugador &j) {
    std::cout << j.GetNombre() << "\n" << "Vida: " << j.GetVida() << "/" << j.GetMaxVida() << "\n"
    "Atk: " << j.GetAtaque() << "\n"
    "Def: " << j.GetDefensa() << "\n"
    "Mana: " << j.GetMana() <<"/" << j.GetMaxMana() << "\n";
}

//Métodos para la exploración

void Vista::MostrarHabitacion(std::string Texto) {
    std::cout << Texto;
}

void Vista::MostrarConexiones(const Habitacion& h) {
    std::cout << "\nSalidas disponibles desde esta habitacion:\n";

    Habitacion* norte = h.GetConexion(0);
    Habitacion* este  = h.GetConexion(1);
    Habitacion* sur   = h.GetConexion(2);
    Habitacion* oeste = h.GetConexion(3);

    if (norte) std::cout << "0) Norte -> Habitacion " << norte->GetID() << "\n";
    if (este)  std::cout << "1) Este  -> Habitacion " << este->GetID() << "\n";
    if (sur)   std::cout << "2) Sur   -> Habitacion " << sur->GetID() << "\n";
    if (oeste) std::cout << "3) Oeste -> Habitacion " << oeste->GetID() << "\n";

    std::cout << "Elige una direccion (0-3): ";
}


void Vista::MostrarExploracion(std::string Texto) {
    std::cout << Texto;
}

//Métodos Inventario

void Vista::MostrarInventario(const Inventario& inv) const {
    std::cout << "\n--- Inventario ---\n";
    inv.Listar();
    std::cout << inv.Cantidad() + 1 << ") Salir\n";
}

int Vista::ElegirObjeto(int max) const {
    std::cout << "Selecciona objeto a usar: ";
    int index;
    std::cin >> index;
    return index - 1;
}

void Vista::MostrarInventarioVacio() const {
    std::cout << "\nTu inventario está vacio.\n";
}

void Vista::MostrarObjetoUsado(const std::string& nombre) const {
    std::cout << "Usaste " << nombre << ".\n";
}

void Vista::MostrarObjetoClaveNoUsable() const {
    std::cout << "Ese objeto no puede usarse manualmente.\n";
}


//Métodos para combate
void Vista::MostrarInicioCombate(const Jugador& j,
                                 const std::vector<std::unique_ptr<Enemigo>>& enemigos)
{
    std::cout << "Comienza el combate\n";
    std::cout << j.GetNombre() << " Vida: " << j.GetVida() << "\n\n";

    std::cout << "Enemigos:\n";
    for (size_t i = 0; i < enemigos.size(); i++) {
        std::cout << i << ") " << enemigos[i]->GetNombre();
    }
    std::cout << "\n";
}

void Vista::MostrarTurnoJugador(const Jugador& j) {
    std::cout << "\n //Turno de " << j.GetNombre() << " // \n";
    std::cout << "1) Atacar\n2) Ataque Fuego (5 mana)\n";
    std::cout << "Mana de " << j.GetNombre() << ": "<< j.GetMana();
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

void Vista::MostrarDanioEnemigo(const Enemigo& e, int danio, const Jugador& j) {
    std::cout << e.GetNombre() << " te golpea por " << danio << "\n"
              << ". Vida de " << j.GetNombre() << ": " << j.GetVida() << "/" << j.GetMaxVida() << "\n";
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



