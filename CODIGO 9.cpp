#include <iostream>
using namespace std;

int main() {
    int X = 5, Y;

    int valor1 = ++X;
    int valor2 = X--;
    Y = valor1 * valor2;

    cout << "X = " << X << ", Y = " << Y;
    return 0;
}