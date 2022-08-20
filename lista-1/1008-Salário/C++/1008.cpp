#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declarar variáveis funcionario, horas e valor hora
    int id;
    int horas;
    float valor;
    // Input
    cin >> id
        >> horas
        >> valor;
    // Calcular salário
    float sal = horas * valor;
    // Output
    cout << "NUMBER = "
         << id
         << endl
         << "SALARY = U$ "
         << fixed
         << setprecision(2)
         << sal
         << endl;

    return 0;
}