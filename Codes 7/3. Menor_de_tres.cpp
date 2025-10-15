#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Digite tres numeros: ";
    cin >> a >> b >> c;

    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    cout << "MENOR = " << menor << endl;

    return 0;
}
