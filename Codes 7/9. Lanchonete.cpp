#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigo, quantidade;
    double preco;

    // Entrada dos dados
    cout << "Codigo do produto: ";
    cin >> codigo;
    cout << "Quantidade comprada: ";
    cin >> quantidade;

    switch (codigo) {
        case 1: preco = 5.00; break;
        case 2: preco = 3.50; break;
        case 3: preco = 4.80; break;
        case 4: preco = 8.90; break;
        case 5: preco = 7.32; break;
        default: preco = 0.0; break; 
    }

    double total = preco * quantidade;

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << total << endl;

    return 0;
}
