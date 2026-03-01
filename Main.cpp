using namespace std;        //Curso: Programación III    
                            //Carnet: 9941 24 7857
struct Producto {           //Hoja de Trabajo 2 - Estructura y Nodos
    int codigo;
    string nombre;
    double precio;
};

struct Nodo {
    Producto data;
    Nodo* siguiente;
};

int main() {

    Nodo* primero = new Nodo;

    primero->data.codigo = 101;
    primero->data.nombre = "Laptop";
    primero->data.precio = 5500.50;

    primero->siguiente = nullptr;


    Nodo* segundo = new Nodo;

    segundo->data.codigo = 102;
    segundo->data.nombre = "Mouse";
    segundo->data.precio = 150.75;

    segundo->siguiente = nullptr;

    primero->siguiente = segundo;


    Nodo* tercero = new Nodo;

    tercero->data.codigo = 103;
    tercero->data.nombre = "Teclado";
    tercero->data.precio = 300.00;

    tercero->siguiente = nullptr;

    segundo->siguiente = tercero;


    Nodo* actual = primero;

    while (actual != nullptr) {
        cout << "Codigo: " << actual->data.codigo << endl;
        cout << "Nombre: " << actual->data.nombre << endl;
        cout << "Precio: Q" << actual->data.precio << endl;
        cout << "--------------------------" << endl;

        actual = actual->siguiente;
    }


    actual = primero;

    while (actual != nullptr) {
        Nodo* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }

    primero = nullptr;

    return 0;
