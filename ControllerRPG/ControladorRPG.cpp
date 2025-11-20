#include "ControladorRPG.h"
#include "..\Model\Merodeador.h"
#include "..\Model\Constructo.h"
#include "..\Model\GranConstructo.h"
#include "..\Model\Habitacion.h"
#include "..\Model\Consumible.h"
#include <iostream>

ControladorRPG::ControladorRPG(Vista* v)
        : vista(v), habitacionActual(1), jugador("Heroe", 75, 8, 12, 20)
{
    CrearMapa();
}

void ControladorRPG::CrearMapa() {
    hab.resize(18, nullptr);


    hab[1]  = new Habitacion(1, "Te encuentras frente a la entrada de las ruinas de un antiguo templo "
                                "donde se veneraba a un dios del trueno, hay multiples estatuas alrededor de toda la entrada, parecen mirar en tu direccion\n",
                                "Dentro de las bocas de las estatuas distingues un ligero brillo, te acercas y...\n");

    hab[2]  = new Habitacion(2, "Una sala completamente silenciosa y oscura\n",
        "Invocas una pequeña flama para iluminar la habitación y...\n");

    hab[3]  = new Habitacion(3, "Dentro de la habitación se levantan 2 pilares enormes decorados con antiguos simbolos elficos, "
                                "parecen ilustrar un ritual en el cual los elfos se dirigian a la cima del templo al llegar a su adultez\n",
                                "Detallando los muros de la habitacion te fijas en lo que parece un cuadro del dios del trueno, desgarrado, decides moverlo y...\n");

    hab[4]  = new Habitacion(4, "Una gran estatua destruida se encuentra en el centro de la habitacion, no logras"
                                " identificar que representa pero su tamano ensombrece toda la habitacion\n",
                                "Entre los restos de los enemigos que acabas de derrotar distingues un brillo, te acercas y...\n");

    hab[5]  = new Habitacion(5, "Te encuentras dentro de la habitacion central del templo, hay "
                                "4 columnas alrededor de la habitacion y las paredes tienen tallados ilustraciones de seres antiguos\n",
                                "Distingues 4 salidas de esta habitacion\n");

    hab[6]  = new Habitacion(6, "En la habitación un gran bloque cuya funcion no logras distinguir brilla ligeramente\n",
        "Decides dirigir tu mano hacia el bloque y...\n");

    hab[7]  = new Habitacion(7, "Una gran habitación mayormente vacía, 4 fuentes pequeñas adornan la habitacion\n",
        "En el fondo de la habitacion hay una vasija con simbolos elficos, cedes a tus instintos y decides romper la vasija y...\n");

    hab[8]  = new Habitacion(8, "Te encuentras en lo que parece ser una antigua libreria, lamentablemente todos los libros "
                                "estan escritos en elfico antiguo, aun asi estas seguro de que en esta habitacion se oculta algo\n",
                                "Observas un libro que parece resaltar entre los demas, lo tomas de la estanteria y...\n");

    hab[9]  = new Habitacion(9, "Una estructura se encuentra en el centro de la habitacion rodeada de 3 estatuas pequeñas, sobre la estructura distingues algo que "
                                "parece util\n", "Decidis estirarte hacia la estructura y...\n");

    hab[10] = new Habitacion(10,"Te encuentras una habitacion oscura con 2 antorchas encendidas, en medio de la habitacion se encuentra ¿un anciano?\n",
        "Decides hablar con el anciano...\n");

    hab[11] = new Habitacion(11,"Te encuentras con una sala con multiples canales de agua, hay una sola salida hacia el norte\n",
        "No logras distinguir nada entre los canales de agua\n");

    hab[12] = new Habitacion(12,"Una fuente inmensa se encuentra en el medio de la habitacion, te sientes observado\n",
        "Te acercas sediento al agua de la fuente...\n");

    hab[13] = new Habitacion(13,"Una habitacion totalmente vacía con un cofre en el fondo\n",
        "Te dispones a abrir el cofre y...\n");

    hab[14] = new Habitacion(14,"Una habitacion mayormente destruida con 4 pilares, un muro destruido deja ver las nubes y las montañas a la distancia\n",
        "No hay mucho que observar por aqui, solo notas la altura en la que te encuentras\n");

    hab[15] = new Habitacion(15,"Una sala llena de pilares como un laberinto, probablemente un lugar antiguo de congregacion, sientes "
                                "como te aproximas cada vez mas a la cima\n", "La columna central parece ser un lugar para antiguas ofrendas, la revisas y...\n");

    hab[16] = new Habitacion(16,"Abriendo la gran puerta te encuentras en lo que parece ser el patio del templo, el punto mas alto"
                                " de la montaña, lo mas cercanos que podian estar los elfos a su dios, no parece haber mucho que ver aqui, "
                                "¿habra sido toda tu aventura un desperdicio?\n","Adentrandote mas en el patio escuchas un ruido inexplicable, "
                                                                               "el viento te zarandea y de repente...\n");

    hab[17] = new Habitacion(17,"Una habitacion completamente diferente a todo el templo, es solo una cueva, oscura, humeda, hasta pareceque hay un... ¿nido?\n",
        "Acercandote al nido encuentras lo que has estado buscando todo este tiempo\n");

    // 0:Norte 1:Este 2:Sur 3:Oeste
    hab[1]->SetConexion(0, hab[4]);
    hab[1]->SetConexion(1, hab[3]);
    hab[1]->SetConexion(3, hab[2]);

    hab[2]->SetConexion(1, hab[1]);

    hab[3]->SetConexion(3, hab[1]);;

    hab[4]->SetConexion(0, hab[5]);
    hab[4]->SetConexion(2, hab[1]);

    hab[5]->SetConexion(0, hab[8]);
    hab[5]->SetConexion(1, hab[7]);
    hab[5]->SetConexion(2, hab[4]);
    hab[5]->SetConexion(3, hab[6]);

    hab[6]->SetConexion(0, hab[9]);
    hab[6]->SetConexion(1, hab[5]);

    hab[7]->SetConexion(0, hab[14]);
    hab[7]->SetConexion(3, hab[5]);

    hab[8]->SetConexion(0, hab[11]);
    hab[8]->SetConexion(1, hab[14]);
    hab[8]->SetConexion(2, hab[5]);
    hab[8]->SetConexion(3, hab[9]);

    hab[9]->SetConexion(1, hab[8]);
    hab[9]->SetConexion(2, hab[6]);
    hab[9]->SetConexion(3, hab[10]);

    hab[10]->SetConexion(1, hab[9]);

    hab[11]->SetConexion(0, hab[12]);
    hab[11]->SetConexion(2, hab[8]);

    hab[12]->SetConexion(2, hab[11]);
    hab[12]->SetConexion(3, hab[13]);

    hab[13]->SetConexion(1, hab[12]);

    hab[14]->SetConexion(1, hab[15]);
    hab[14]->SetConexion(2, hab[7]);
    hab[14]->SetConexion(3, hab[15]);

    hab[15]->SetConexion(0, hab[16]);
    hab[15]->SetConexion(3, hab[14]);

    hab[16]->SetConexion(1, hab[17]);
    hab[16]->SetConexion(2, hab[15]);
}


void ControladorRPG::IniciarJuego() {
    std::string nombreJugador;
    std::cout << "Introduce el nombre de tu heroe: ";
    std::getline(std::cin, nombreJugador);

    if (nombreJugador.empty())
        nombreJugador = "Heroe";
    this -> jugador = Jugador(nombreJugador, 75, 8, 12, 20);

    jugador.GetInventario().Agregar(
    std::make_unique<Consumible>("Pocion pequena", "Restaura 25 puntos de vida", 25, 0)
);

    jugador.GetInventario().Agregar(
        std::make_unique<Consumible>("Pocion pequena", "Restaura 25 puntos de vida", 25, 0)
    );

    jugador.GetInventario().Agregar(
        std::make_unique<Consumible>("Extracto de mana", "Restaura 15 de mana", 0, 15)
    );

    jugador.AgregarHabilidad("GranEspadazo");
    jugador.AgregarHabilidad("CuracionMagica");

    Habitacion* h = hab[habitacionActual];
    vista->MostrarHabitacion(h->GetDescripcion());
    while (true) {
        MenuPrincipal();
    };


}

void ControladorRPG::MenuPrincipal() {
    vista->MostrarMenuPrincipal();
    int opcion = vista->LeerOpcionJugador();

    switch (opcion) {
        case 1:
            ExplorarHabitacion();
            break;
        case 2:
            MoverHabitacion();
            break;
        case 3:
            MostrarStatsJugador();
            break;
        case 4:
            AbrirInventario();
            break;
        case 5:
            exit(0);
            break;
        case 6: {
            //Temporal
            std::vector<std::unique_ptr<Enemigo>> enemigosPrueba;
            enemigosPrueba.push_back(std::make_unique<Merodeador>());
            enemigosPrueba.push_back(std::make_unique<Merodeador>());
            enemigosPrueba.push_back(std::make_unique<Constructo>());
            Combate(enemigosPrueba);
        }
            break;
        default:
            break;
    }
}

void ControladorRPG::ExplorarHabitacion() {
    Habitacion* h = hab[habitacionActual];

    vista->MostrarExploracion(h->GetTextoExploracion());

    h->MarcarExplorada();

}

void ControladorRPG::MoverHabitacion() {

    Habitacion* actual = hab[habitacionActual];

    vista->MostrarConexiones(*actual);

    int dir = vista->LeerOpcionJugador();

    Habitacion* destino = actual->GetConexion(dir);

    if (!destino) {
        std::cout << "No hay salida en esa dirección.\n";
        return;
    }

    habitacionActual = destino->GetID();
    Habitacion* h = hab[habitacionActual];
    vista->MostrarHabitacion(h->GetDescripcion());
}

void ControladorRPG::MostrarStatsJugador() {
    vista->MostrarStatsJugador(jugador);
}

bool ControladorRPG::AbrirInventario() {
    auto& inv = jugador.GetInventario();

    if (inv.Cantidad() == 0) {
        vista->MostrarInventarioVacio();
        return false;
    }

    vista->MostrarInventario(inv);
    UsarObjetoInventario();
    return true;
}

void ControladorRPG::UsarObjetoInventario() {
    auto& inv = jugador.GetInventario();
    int index = vista->ElegirObjeto(inv.Cantidad());

    if (index < 0 || index >= inv.Cantidad())
        return;

    Objeto* obj = inv.Get(index);
    if (!obj) return;

    TipoObjeto tipo = obj->GetTipo();

    if (tipo == TipoObjeto::Consumible) {
        obj->Usar(jugador);
        vista->MostrarObjetoUsado(obj->GetNombre());
        inv.Eliminar(index);
        return;
    }

    if (tipo == TipoObjeto::Equipable) {
        obj->Usar(jugador);
        inv.Eliminar(index);
        vista->MostrarObjetoUsado(obj->GetNombre());
        return;
    }

    if (tipo == TipoObjeto::Clave) {
        vista->MostrarObjetoClaveNoUsable();
        return;
    }
}


void ControladorRPG::Combate(std::vector<std::unique_ptr<Enemigo>>& enemigos)
{
    vista->MostrarInicioCombate(jugador, enemigos);

    while (jugador.EstaViva()) {

        bool vivos = false;
        for (auto& e : enemigos) if (e->EstaViva()) vivos = true;
        if (!vivos) break;

        bool turnoConsumido = false;

        while (!turnoConsumido) {

            vista->MostrarTurnoJugador(jugador);
            int opcion = vista->LeerOpcionJugador();

            int totalOpciones = 2 + jugador.GetHabilidades().size();

            if (opcion < 0 || opcion > totalOpciones) {
                vista->MostrarOpcionInvalida();
                continue;
            }

            if (opcion ==0) {
                MostrarStatsJugador();
                continue;
            }

            if (opcion == 1) {
                int obj = vista->ElegirObjetivo(enemigos);
                int danio = jugador.Atacar();
                int real = enemigos[obj]->RecibirDanio(danio);
                vista->MostrarDanioJugador(real, *enemigos[obj]);
                turnoConsumido = true;
            }

            else if (opcion == 2) {
                bool usoObjeto = AbrirInventario();
                turnoConsumido = usoObjeto;
            }

            else {
                int habIndex = opcion - 3;
                if (habIndex < 0 || habIndex >= (int)jugador.GetHabilidades().size()) {
                    vista->MostrarOpcionInvalida();
                    continue;
                }

                int objetivo = -1;
                std::string habilidad = jugador.GetHabilidades()[habIndex];

                if (habilidad != "Escudo" && habilidad != "CuracionMagica") {
                    objetivo = vista->ElegirObjetivo(enemigos);
                }

                bool usada = EjecutarHabilidadJugador(habIndex, objetivo, enemigos);

                if (usada) turnoConsumido = true;
            }

        }

        bool todosMuertos = true;
        for (auto& e : enemigos)
            if (e->EstaViva()) todosMuertos = false;

        if (todosMuertos) break;

        for (auto& e : enemigos) {
            if (!e->EstaViva()) continue;

            vista->MostrarTurnoEnemigo(*e);

            int prob = rand() % 2;

            if (prob == 0) {
                int danio = e->Atacar();
                jugador.RecibirDanio(danio);
                vista->MostrarDanioEnemigo(*e, danio, jugador);
            } else {
                EjecutarHabilidadEnemigo(*e, enemigos);
            }

            if (!jugador.EstaViva()) break;
        }

    }

    if (jugador.EstaViva()) vista->MostrarVictoria();
    else vista->MostrarDerrota();
}

bool ControladorRPG::EjecutarHabilidadJugador(int index, int objetivo, std::vector<std::unique_ptr<Enemigo>>& enemigos)
{
    std::string h = jugador.GetHabilidades()[index];

    if (h == "GranEspadazo") {
        int base = jugador.GranEspadazo();
        if (base < 0) {
            vista->MostrarSinMana();
            return false; // turno NO consumido
        }
        vista->MostrarHabilidadesJugador(jugador, "Gran Espadazo");
        int real = enemigos[objetivo]->RecibirDanio(base);
        vista->MostrarDanioJugador(real, *enemigos[objetivo]);
        return true;
    }

    else if (h == "AtaqueFuego") {
        int base = jugador.AtaqueFuego();
        if (base < 0) {
            vista->MostrarSinMana();
            return false; // turno NO consumido
        }
        vista->MostrarHabilidadesJugador(jugador, "Ataque Fuego");
        int real = enemigos[objetivo]->RecibirDanio(base);
        vista->MostrarDanioJugador(real, *enemigos[objetivo]);
        return true;
    }

    else if (h == "Tornado") {
        int base = jugador.Tornado();
        if (base < 0) {
            vista->MostrarSinMana();
            return false; // turno NO consumido
        }
        vista->MostrarHabilidadesJugador(jugador, "Tornado");
        int real = enemigos[objetivo]->RecibirDanio(base);
        vista->MostrarDanioJugador(real, *enemigos[objetivo]);
        return true;
    }

    else if (h == "Escudo") {
        int buff = jugador.Escudo();
        if (buff < 0) {
            vista->MostrarSinMana();
            return false;
        }
        vista->MostrarBuffDefJugador(buff);
        return true;
    }

    else if (h == "CuracionMagica") {
        int cura = jugador.CuracionMagica();
        if (cura < 0) {
            vista->MostrarSinMana();
            return false;
        }
        vista->MostrarCuracionJugador(jugador);
        return true;
    }

    vista->MostrarOpcionInvalida();
    return false;
}


void ControladorRPG::EjecutarHabilidadEnemigo(Enemigo& e, std::vector<std::unique_ptr<Enemigo>>& enemigos) {

    int n = e.NumHabilidades();
    int eleccion = rand() % n;
    std::string texto;

    switch (eleccion) {
        case 0: texto = e.Habilidad(jugador, enemigos); break;
        case 1: texto = e.Habilidad2(jugador, enemigos); break;
        case 2: texto = e.Habilidad3(jugador, enemigos); break;
        case 3: texto = e.Habilidad4(jugador, enemigos); break;
        case 4: texto = e.Habilidad5(jugador, enemigos); break;
    }

    vista->MostrarHabilidadEnemigo(e, texto);

}

