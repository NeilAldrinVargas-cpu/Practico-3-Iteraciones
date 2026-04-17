#include <iostream>

using namespace std;

int main() {
    int a, b, residuo;

    // 1. Solicitar los dos números al usuario
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Guardamos los valores originales para mostrarlos al final
    int num1 = a;
    int num2 = b;

    // 2. Aplicar el algoritmo de Euclides usando un ciclo while
    // El ciclo continúa mientras el divisor (b) sea distinto de 0
    while (b != 0) {
        residuo = a % b; // Calculamos el residuo de la división
        a = b;           // El antiguo divisor pasa a ser el dividendo
        b = residuo;     // El residuo pasa a ser el nuevo divisor
    }

    // 3. Resultado
    // Cuando b llega a 0, 'a' contiene el máximo común divisor
    cout << "\nEl MCD de " << num1 << " y " << num2 << " es: " << a << endl;

    return 0;
}
