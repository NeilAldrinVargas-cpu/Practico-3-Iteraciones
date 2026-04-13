#include <iostream>

using namespace std;

int main() {
    int n;
    long long a = 1, b = 1, siguiente;

    cout << "Ingrese el valor de n para hallar el n-esimo numero de Fibonacci: ";
    cin >> n;

    if (n == 0 || n == 1) {
        cout << "El numero de Fibonacci en la posicion " << n << " es: 1" << endl;
    } else {
        // Calculamos desde la posicion 2 hasta n
        for (int i = 2; i <= n; ++i) {
            siguiente = a + b;
            a = b;
            b = siguiente;
        }
        cout << "El numero de Fibonacci en la posicion " << n << " es: " << b << endl;
    }

    return 0;
}
