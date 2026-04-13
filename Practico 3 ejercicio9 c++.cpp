#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double x;
    int n;
    float suma=0;

    cout<<"Ingrese el valor de x:";
    cin>>x;
    cout<<"Ingrese el valor de n (Entero):";
    cin>>n;

    for(int i=1; i<=n; i++){

        int factorial=1;
        for(int j=1; j<=i; j++){
                factorial*=j;}


    double termino=pow(x,i)/factorial;

    // Alternar signo: si i es par, restamos; si es impar, sumamos
        if (i % 2 == 0) {
            suma -= termino;
        } else {
            suma += termino;
        }

    }


 cout<<"El resultado de la serie es: "<< suma<<endl;
return 0;
}
