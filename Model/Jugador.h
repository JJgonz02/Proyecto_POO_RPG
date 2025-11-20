#ifndef RPG_POO_JUGADOR_H
#define RPG_POO_JUGADOR_H

#include "Entidad.h"
#include "Inventario.h"

class Jugador : public Entidad {
private:
    int maxMana;
    int mana;
    int defensaTemporal;
    int ataqueTemporal;
    std::vector<std::string> habilidades;
    Inventario inventario;

public:
    Jugador(const std::string& n, int hp, int atk, int def, int m);

    bool PuedeGastarMana(int costo) const;
    void GastarMana(int costo);
    int GetMana() const;
    int GetMaxMana() const;
    void RecuperarMana(int cantidad);

    //Habilidades Mana
    int GranEspadazo();
    int AtaqueFuego();
    int Tornado();
    int Escudo();
    int CuracionMagica();
    void AgregarHabilidad(const std::string& h);
    const std::vector<std::string>& GetHabilidades() const;


    void AplicarBuffDefensa(int aumento);
    void AplicarBuffAtaque(int aumento);
    void ResetBuffs();

    void CurarJugador(int cantidad);

    Inventario& GetInventario();
};

#endif

