#include <iostream>
using namespace std;

int main() {
    int Y = 4, X = 4;

    Y = ++X;

    int valorX = X++;
    int valorY = ++Y;
    X = valorX + valorY;

    cout << "X = " << X << ", Y = " << Y;
    return 0;
}