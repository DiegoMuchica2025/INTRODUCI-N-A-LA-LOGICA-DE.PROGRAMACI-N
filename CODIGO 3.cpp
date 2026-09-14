#include <iostream>
using namespace std;

int main() {
    int A = 5, B = 10;

    A += 3;
    B -= A;

    cout << "A = " << A << ", B = " << B;
    return 0;
}