#include <iostream>
using namespace std;

int contarOcorrencias(int matriz[4][4], int numero) {
    int cont = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matriz[i][j] == numero)
                cont++;
    return cont;
}

int main() {
    int matriz[4][4], num;
    cout << "Digite os elementos da matriz 4x4:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matriz[i][j];

    cout << "Digite o numero a contar: ";
    cin >> num;

    cout << "Ocorrencias de " << num << ": " << contarOcorrencias(matriz, num) << endl;
    return 0;
}
