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

    cout << fixed << setprecision(2);
    if (dinheiro >= total) {
        cout << "TROCO = R$ " << dinheiro - total << endl;
    } else {
        cout << "DINHEIRO INSUFICIENTE. FALTAM R$ " << total - dinheiro << endl;
    }

    return 0;
}
