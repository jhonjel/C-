#include <iostream>

using namespace std;

// Estructura para los nodos del árbol
struct Nodo {
    int year; // año de nacimiento de los pasajeros
    string name; // nombre del pasajero
    Nodo* left; // puntero al sub-árbol izquierdo
    Nodo* right; // puntero al sub-árbol derecho
};

// Función para crear un nuevo nodo con el nombre y año de nacimiento del pasajero
Nodo* crearNodo(string nombre, int year) {
    Nodo* nodo = new Nodo;
    nodo->name = nombre;
    nodo->year = year;
    nodo->left = NULL;
    nodo->right = NULL;
    return nodo;
}

// Función para insertar un nodo en el árbol binario
Nodo* insertarNodo(Nodo* raiz, string nombre, int year, bool isNacional) {
    if (raiz == NULL) {
        raiz = crearNodo(nombre, year);
        return raiz;
    }
    if ((isNacional && nombre < raiz->name) || (!isNacional && nombre > raiz->name)) {
        raiz->left = insertarNodo(raiz->left, nombre, year, isNacional);
    }
    else if ((isNacional && nombre > raiz->name) || (!isNacional && nombre < raiz->name)) {
        raiz->right = insertarNodo(raiz->right, nombre, year, isNacional);
    }
    else {
        if (year < raiz->year) {
            raiz->left = insertarNodo(raiz->left, nombre, year, isNacional);
        }
        else {
            raiz->right = insertarNodo(raiz->right, nombre, year, isNacional);
        }
    }
    return raiz;
}

// Función para recorrer el árbol binario en orden (izquierda, nodo, derecha)
void inOrden(Nodo* nodo) {
    if (nodo == NULL) {
        return;
    }
    inOrden(nodo->left);
    cout << nodo->name << " (" << nodo->year << ")" << endl;
    inOrden(nodo->right);
}

int main() {
    // Creamos la raíz del árbol
    Nodo* raiz = NULL;

    // Insertamos nodos para los pasajeros
    raiz = insertarNodo(raiz, "Pasajero 1", 1990, true);
    raiz = insertarNodo(raiz, "Pasajero 22", 2000, true);
    inOrden(raiz);
    
    return 0;
	}