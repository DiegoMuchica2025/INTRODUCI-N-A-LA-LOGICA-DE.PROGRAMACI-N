#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    if (N % 2 == 0) {
        cout << "PAR";
    } else {
        cout << "IMPAR";
    }

    return 0;
}