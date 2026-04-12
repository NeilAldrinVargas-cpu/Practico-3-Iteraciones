#include <iostream>
using namespace std;

int main(){
    int N;
    long long suma=0;

    cout<<"Ingrese el numero entero N:";
    cin>>N;

    for(int i=1; i<=N; i++){
            if(i % 2!=0){suma+=i;}
    else {suma=suma-i;}
    }

    cout<<"===========================================\n";
    cout << "El resultado de la suma es: " << suma << endl;
    cout<<"===========================================\n";

    return 0;

}
