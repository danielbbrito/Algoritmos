#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variável
    float sal;
    float reajuste;
    int percentual;

    // Input
    cin >> sal;
    // Verificar condicionais de salário
    // Calcular salário e reajuste
    if (0 <= sal && sal <= 400)
    {
        reajuste = sal * 0.15;
        sal *= 1.15;
        percentual = 15;
    }

    else if (400 < sal && sal <= 800)
    {
        reajuste = sal * 0.12;
        sal *= 0.12;
        percentual = 12;
    }

    else if (800 < sal && sal <= 1200)
    {
        reajuste = sal * 0.1;
        sal *= 1.1;
        percentual = 10;
    }

    else if (1200 < sal && sal <= 2000)
    {
        reajuste = sal * 0.07;
        sal *= 1.07;
        percentual = 7;
    }
    else
    {
        reajuste = sal * 0.04;
        sal *= 1.04;
        percentual = 4;
    }

    // Output
    cout << "Novo salario: "
         << fixed
         << setprecision(2)
         << sal
         << "\nReajuste ganho: "
         << reajuste
         << "\nEm percentual: "
         << percentual
         << " %"
         << endl;
    
    return 0;
}
