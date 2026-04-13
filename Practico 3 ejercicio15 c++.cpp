#include <iostream>
#include <iomanip> // Para el formato setfill y setw
#include <thread>  // Para sleep_for
#include <chrono>  // Para milliseconds

using namespace std;

int main() {
    // Ciclos para horas, minutos y segundos
    for (int h = 0; h < 24; ++h) {
        for (int m = 0; m < 60; ++m) {
            for (int s = 0; s < 60; ++s) {

                // Limpiar la pantalla (usa "clear" si estas en Linux o macOS)
                system("cls");

                // Imprimir el reloj con formato HH:MM:SS
                // setw(2) asegura que ocupen 2 espacios, setfill('0') rellena con ceros
                cout << setfill('0') << setw(2) << h << ":"
                     << setfill('0') << setw(2) << m << ":"
                     << setfill('0') << setw(2) << s << endl;

                // Pausar la ejecucion por 1000 milisegundos (1 segundo)
                this_thread::sleep_for(chrono::milliseconds(1000));
            }
        }
    }

    return 0;
}
