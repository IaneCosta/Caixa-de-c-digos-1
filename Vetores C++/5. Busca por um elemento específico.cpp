#include <iostream>
using namespace std;

int main() {
    int vetor[10], busca, encontrado = 0;
    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    cout << "Digite o numero a buscar: ";
    cin >> busca;
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == busca) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado)
        cout << "Numero encontrado no vetor.\n";
    else
        cout << "Numero nao encontrado.\n";
    return 0;
}
