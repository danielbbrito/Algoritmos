#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int mes, dia;

    // Ler mes e dia até EOF
    while (cin >> mes >> dia)
    {
        // Calcular quantos dias faltam para o natal e calculá-los
        if (mes == 12)
        {
            if (dia == 25)
            {
                cout << "E natal!\n";
            }
            else if (dia == 24)
            {
                cout << "E vespera de natal!\n";
            }
            else if (dia > 25)
            {
                cout << "Ja passou!\n";
            }
        }
        else if (mes <= 2 || mes == 9 || mes == 11)
        {
            int natal = (25 + (11 * 30) + 5) - (dia + ((mes - 1) * 30) + (mes / 2));

            cout << "Faltam "
                 << natal
                 << " dias para o natal!\n";
        }
        else
        {
            int natal = (25 + (11 * 30) + 6) - (dia + ((mes - 1) * 30) + (mes / 2));

            cout << "Faltam "
                 << natal
                 << " dias para o natal!\n";
        }
    }

    cout << flush;

    return 0;
}