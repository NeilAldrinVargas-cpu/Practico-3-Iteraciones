#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double x;
    int n;
    double suma=0;

    cout<<"Ingrese el valor de X:";
    cin>>x;

    cout<<"Ingrese el valor de n (Entero):";
    cin>>n;

   for(int i=1; i<=n; i++){
    // Calculamos el factorial del denominador
    int factorial=1;
    for(int j=1; j<=i; j++) {
        factorial*=j;
    }
    // Calculamos el término actual: (x^i) / i!
    float termino= pow(x, i)/factorial;

    suma+=termino;


   }


  cout << "El resultado de la serie es: " << suma << endl;

 return 0;

}

