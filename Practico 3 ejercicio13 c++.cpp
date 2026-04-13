#include <iostream>

using namespace std;

int main() {
    // Ciclo externo para la base de la tabla (del 1 al 10)
    for (int i = 1; i <= 10; ++i) {
        cout << "--- Tabla del " << i << " ---" << endl;

        // Ciclo interno para sumar del 1 al 10 a la base 'i'
        for (int j = 1; j <= 10; ++j) {
            cout << i << " + " << j << " = " << (i + j) << endl;
        }

        cout << endl; // Espacio para separar las tablas
    }

    return 0;
}
