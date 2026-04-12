#include <iostream>

using namespace std;

int main() {
    int N;
    long long suma = 0; // Usamos long long para evitar desbordamiento con números grandes

    cout << "Ingrese un numero entero positivo N: ";
    cin >> N;

    // Ciclo para sumar el cuadrado de cada número desde 1 hasta N
    for (int i = 1; i <= N; ++i) {
        suma += (i * i); // Elevamos i al cuadrado antes de sumarlo
    }

    cout << "La suma de los cuadrados de los primeros " << N << " números es: " << suma << endl;

    return 0;
}
