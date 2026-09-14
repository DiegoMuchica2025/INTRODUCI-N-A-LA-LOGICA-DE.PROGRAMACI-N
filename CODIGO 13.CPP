#include <iostream>
using namespace std;

int main() {
    char  caracter1, caracter2;
    cout << "Ingrese el primer caracter: ";
    cin >> caracter1;
    cout << "Ingrese el segundo caracter: ";
    cin >> caracter2;

    if (caracter1 == caracter2) {
        cout << "Los caracteres son iguales";
    } else {
        cout << "Los caracteres son diferentes";
    }

    return 0;
}