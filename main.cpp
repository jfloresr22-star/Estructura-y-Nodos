#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {

    Nodo* primero = new Nodo();
    Nodo* segundo = new Nodo();
    Nodo* tercero = new Nodo();

    cout << "Ingrese el valor del primer nodo: ";
    cin >> primero->dato;

    cout << "Ingrese el valor del segundo nodo: ";
    cin >> segundo->dato;

    cout << "Ingrese el valor del tercer nodo: ";
    cin >> tercero->dato;

    primero->siguiente = segundo;
    segundo->siguiente = tercero;
    tercero->siguiente = NULL;

    cout << endl;
    cout << "Nombre: Josue David Flores Roldan" << endl;
    cout << "Valores almacenados:" << endl;

    Nodo* aux = primero;

    while (aux != NULL) {
        cout << aux->dato << endl;
        aux = aux->siguiente;
    }

    delete primero;
    delete segundo;
    delete tercero;

    return 0;
}