#include <iostream>
using namespace std;

int main() {
    double glicose;

    cout << "Digite a quantidade de glicose (mg/dl): ";
    cin >> glicose;

    if (glicose <= 100.0) {
        cout << "Classificacao: NORMAL" << endl;
    } else if (glicose <= 140.0) {
        cout << "Classificacao: ELEVADO" << endl;
    } else {
        cout << "Classificacao: DIABETES" << endl;
    }

    return 0;
}
