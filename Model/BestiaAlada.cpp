#include "BestiaAlada.h"

BestiaAlada::BestiaAlada()
    : Enemigo("Bestia Alada", 75, 18, 20) {}

std::string BestiaAlada::Habilidad(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {
    j.AplicarBuffDefensa(-5);
    return nombre + "genera una rafaga de viento desbalanceandote y disminuyendo tu defensa!";
}

std::string BestiaAlada::Habilidad2(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string BestiaAlada::Habilidad3(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string BestiaAlada::Habilidad4(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}
std::string BestiaAlada::Habilidad5(Jugador& j, std::vector<std::unique_ptr<Enemigo>>& aliados) {return "";}

int BestiaAlada::NumHabilidades() {
    return 1;
}
