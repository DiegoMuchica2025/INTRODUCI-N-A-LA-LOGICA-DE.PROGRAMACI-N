#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

    srand(time(0));
    int computadora, jugador;
    computadora = rand() % 3 + 1;

    cout << "Elige una opcion:" << endl;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;

    cout << "Cual es tu opcion: ";
    cin >> jugador;

    cout << "La computadora eligio: " << computadora << endl;

    if (jugador == computadora) {
        cout << "EMPATE";
    }
    else {
        if (jugador == 1) {
            if (computadora == 2) {
                cout << "GANO LA COMPUTADORA";
            }
            else {
                cout << "GANASTE";
            }
        }
        else {
            if (jugador == 2) {
                if (computadora == 3) {
                    cout << "GANO LA    COMPUTADORA";
                }
                else {
                    cout << "GANASTE";
                }
            }
            else {
                if (computadora == 1) {
                    cout << "GANO LA COMPUTADORA";
                }
                else {
                    cout << "GANASTE";
                }
            }
        }
    }

    return 0;
}
