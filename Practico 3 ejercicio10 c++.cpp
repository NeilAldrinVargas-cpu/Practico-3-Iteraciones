#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x;
    int n;
    double suma=0;
    int signo = 1; // Variable para alternar el signo (+1 o -1)

    cout<<"Ingrese el valor de x: ";
    cin>>x;
    cout<<"Ingrese el exponente (Entero): ";
    cin>>n;

    // El ciclo avanza de 2 en 2 para obtener: 1, 3, 5...
    for(int i=1; i<=n; i+=2){
        long long factorial=1;

    for(int j=1; j<=i; j++){factorial*=j;}

    // Calcular el término actual: (x^i) / i!
    float termino=pow(x, i)/factorial;

     // Sumar o restar al acumulador según el signo actual
        suma += (signo * termino);

        // Invertir el signo para la próxima iteración
        signo *= -1;


    }

    cout<<"El resultado de la serie es: "<<suma<<endl;
    return 0;
}
