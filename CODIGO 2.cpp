#include <iostream>
using namespace std;

int main() {
    int A = 5, B = 10, C;

    C = (A++ + ++B) * 2;

    cout << "A = " << A << ", B = " << B
         << ", C = " << C;
    return 0;
}