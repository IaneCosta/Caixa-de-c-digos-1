#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matriz[i][j];

    cout << "Matriz com linhas invertidas:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 2; j >= 0; j--)
            cout << matriz[i][j] << " ";
        cout << endl;
    }
    return 0;
}
