#include <iostream>

using namespace std;

int main() {
    int a, b, residuo;
    int numA, numB;

    cout << "Ingrese el primer numero: ";
    cin >> numA;
    cout << "Ingrese el segundo numero: ";
    cin >> numB;

     // Guardamos los valores originales para el cálculo final
    a = numA;
    b = numB;

    // Algoritmo de Euclides
    while (b != 0) {
        residuo = a % b; // Calculamos el residuo
        a = b;           // El divisor pasa a ser el dividendo
        b = residuo;     // El residuo pasa a ser el nuevo divisor
    }
    int mcd=a; // 'a' ahora contiene el MCD
    float mcm= (numA*numB)/mcd;

    cout << "El MCD de " << numA << " y " << numB << " es: " << mcd << endl;
    cout << "El MCM de " << numA << " y " << numB << " es: " << mcm << endl;


    return 0;
}
