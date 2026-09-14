#include <iostream>
using namespace std;

int main() {
    int A = 7, B = 3, C;

    C = ++A + B--;

    cout << "A = " << A << ", B = " << B
         << ", C = " << C;
    return 0;
}