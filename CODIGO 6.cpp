#include <iostream>
using namespace std;

int main() {
    int A = 12, B = 5, C;

    C = A / B + A % B * 2;

    cout << "C = " << C;
    return 0;
}