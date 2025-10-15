#include <iostream>
using namespace std;

int main() {
    double d1, d2, d3;

    cout << "Digite as tres distancias: ";
    cin >> d1 >> d2 >> d3;

    double maior = d1;
    if (d2 > maior) maior = d2;
    if (d3 > maior) maior = d3;

    cout << "MAIOR DISTANCIA = " << maior << endl;

    return 0;
}
