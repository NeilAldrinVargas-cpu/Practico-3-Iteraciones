#include <iostream>
#include <cmath> // Para la funcion sqrt()

using namespace std;

int main() {
    int N;
    bool esPrimo = true;

    cout << "Ingrese un numero entero N: ";
    cin >> N;

    // Los numeros menores a 2 no son primos
    if (N < 2) {
        esPrimo = false;
    } else {
        // Verificamos divisores desde 2 hasta la raiz cuadrada de N
        // Si N tiene un divisor mayor a su raiz, tambien tendra uno menor.
        for (int i = 2; i <= sqrt(N); ++i) {
            if (N % i == 0) {
                esPrimo = false; // Encontramos un divisor, no es primo
                break;           // Salimos del ciclo inmediatamente
            }
        }
    }

    if (esPrimo) {
        cout << N << " es un numero primo." << endl;
    } else {
        cout << N << " no es un numero primo." << endl;
    }

    return 0;
}
