#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct Atleta {
    char* nombre;
    int numero;
};

struct Tiempo {
    int tiempo;
};

int main() {
    // Definimos la cantidad de atletas y rondas de la prueba
    const int cantAtletas = 10;
    const int cantRondas = 3;

    // Creamos un arreglo para almacenar los atletas
    Atleta* atletas = (Atleta*) malloc(cantAtletas * sizeof(Atleta));

    // Creamos un arreglo tipo FIFO para almacenar los tiempos de cada ronda
    Tiempo* tiempos = (Tiempo*) malloc(cantAtletas * cantRondas * sizeof(Tiempo));

    // Inicializamos los datos de los atletas
    for (int i = 0; i < cantAtletas; i++) {
        // Asignamos memoria para el nombre del atleta
        atletas[i].nombre = (char*) malloc(50 * sizeof(char));

        // Pedimos al usuario que ingrese los datos del atleta
        cout << "Ingrese el nombre del atleta " << i+1 << ": ";
        cin >> atletas[i].nombre;
        cout << "Ingrese el numero del atleta " << i+1 << ": ";
        cin >> atletas[i].numero;
    }

    // Registramos los tiempos de cada atleta en cada ronda
    for (int ronda = 0; ronda < cantRondas; ronda++) {
        for (int i = 0; i < cantAtletas; i++) {
            int tiempo;
            cout << "Ingrese el tiempo de " << atletas[i].nombre << " en la ronda " << ronda+1 << ": ";
            cin >> tiempo;
            tiempos[(ronda * cantAtletas) + i].tiempo = tiempo;
        }
    }

    // Imprimimos los tiempos de la última ronda
    cout << "\nTiempos de la ultima ronda:" << endl;
    for (int i = 0; i < cantAtletas; i++) {
        cout << atletas[i].nombre << ": " << tiempos[((cantRondas-1) * cantAtletas) + i].tiempo << " segundos" << endl;
    }

    // Liberamos la memoria reservada con malloc
    for (int i = 0; i < cantAtletas; i++) {
        free(atletas[i].nombre);
    }
    free(atletas);
    free(tiempos);

    return 0;
}