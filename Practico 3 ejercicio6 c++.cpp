#include <iostream>
#include <cmath>
using namespace std;

int main (){
    float X;
    int N;
    float suma=0;

    cout<<"Ingrese el numero real como la base:";
    cin>>X;

    cout<<"Ingrese el numero Entero para el exponente:";
    cin>>N;

    for(int i=1; i<=N; i++) {suma+=pow(X,i);}

    cout << "El resultado de la serie es: " << suma << endl;

return 0;
}
