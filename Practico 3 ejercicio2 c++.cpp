#include <iostream>
using namespace std;

int main(){
    int N;
    int suma=0;

    cout<<"ingrse un numero entero positivo (N):";
    cin>>N;

    for (int i=1; i<=N; i++){
            if( i%2!=0 )
                {suma += i; }}


    cout<<"=================================================================\n";
    cout<<"La suma de los numeros impares enteros entre 1 y "<<N<<" es: "<<suma<<endl;
    cout<<"=================================================================\n";

    return 0;

}
