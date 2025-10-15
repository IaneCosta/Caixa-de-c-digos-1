#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro;
    int quantidade;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    double total = preco * quantidade;
    double troco = dinheiro - total;

    cout << fixed << setprecision(2);
    cout << "TROCO = R$ " << troco << endl;

    return 0;
}
