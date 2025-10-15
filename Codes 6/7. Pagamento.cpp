#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    double valorHora;
    int horas;

    cout << "Nome do funcionario: ";
    cin >> nome;
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    double pagamento = valorHora * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser R$ " << pagamento << endl;

    return 0;
}
