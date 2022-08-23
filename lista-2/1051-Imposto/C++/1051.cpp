#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis
    float sal;
    float imposto;

    // Input
    cin >> sal;

    // Verificar faixa de salário
    if (0 <= sal && sal <= 2000)
    {
        cout << "Isento"
             << endl;
        return 0;
    }

    else if (2000 < sal && sal <= 3000)
    {
        imposto = (sal - 2000) * 0.08;
        cout << "R$ "
             << fixed
             << setprecision(2)
             << imposto
             << endl;
    }

    else if (3000 < sal && sal <= 4500)
    {
        imposto = (1000 * 0.08) + ((sal - 3000) * 0.18);
        cout << "R$ "
             << fixed
             << setprecision(2)
             << imposto
             << endl;
    }

    else
    {
        imposto = (1000 * 0.08) + (1500 * 0.18) + ((sal - 4500) * 0.28);
        cout << "R$ "
             << fixed
             << setprecision(2)
             << imposto
             << endl;
    }

    return 0;
}
