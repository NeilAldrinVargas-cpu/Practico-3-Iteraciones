#include <iostream>

using namespace std;

int main() {
    int N;
    long long producto = 1; // Inicializamos en 1, no en 0

    cout << "Ingrese un numero entero positivo N: ";
    cin >> N;

    // Calculamos el producto: 1 * 2 * 3 * ... * N
    for (int i = 1; i <= N; ++i) {
        producto *= i; // Multiplicamos el valor actual de i al acumulador
    }

    cout << "El producto de los primeros " << N << " numeros es: " << producto << endl;

    return 0;
}
