#include <iostream>

using namespace std;

int main() {
    int N;
    long long factorial = 1; // Usamos long long para manejar resultados grandes

    cout << "Ingrese un numero entero N para calcular su factorial: ";
    cin >> N;

    // El factorial no está definido para números negativos
    if (N < 0) {
        cout << "El factorial no esta definido para números negativos." << endl;
    } else {
        // Si N es 0, el ciclo no se ejecuta y factorial permanece en 1 (correcto)
        // Para N > 0, calcula 1 * 2 * ... * N
        for (int i = 1; i <= N; ++i) {
            factorial *= i;
        }
        cout << "El factorial de " << N << " es: " << factorial << endl;
    }

    return 0;
}
