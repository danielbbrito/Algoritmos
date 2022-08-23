#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int a1, a2, a3;
    int minutos;

    // Input
    cin >> a1;
    cin >> a2;
    cin >> a3;

    // Se todos os andares tiverem o mesmo número de funcionários
    if (a1 == a2 && a2 == a3)
    {
        minutos = (a1 + a3) * 2;
    }

    // Se a1 for proporcionalmente maior
    else if (a1 > a2 + a3)
    {
        minutos = a2 * 2 + a3 * 4;
    }

    // Se a2 for proporcionalmente maior
    else if (a2 > a1 + a3)
    {
        minutos = (a1 + a3) * 2;
    }

    // Se a3 for proporcionalmente maior
    else if (a3 > a1 + a2)
    {
        minutos = a2 * 2 + a1 * 4;
    }

    // Se a1 for proporcionalmente menor
    else if (a1 < a2 + a3)
    {
        // Se a3 for maior que a2
        if (a2 < a3)
        {
            minutos = (a1 + a3) * 2;
        }

        // Se a2 for maior que a3
        else if (a2 > a3)
        {
            minutos = (a1 + a3) * 2;
        }
    }

    // Se a2 for proporcionalmente menor
    else if (a2 < a1 + a3)
    {
        // Se a3 for maior que a1
        if (a1 < a3)
        {
            minutos = a2 * 2 + a1 * 4;
        }

        // Se a1 for maior que a3
        else if (a1 > a3)
        {
            minutos = a2 * 2 + a3 * 4;
        }
    }

    // Se a3 for proporcionalmente menor
    else if (a3 < a1 + a2)
    {
        // Se a2 for maior que a1
        if (a1 < a2)
        {
            minutos = (a1 + a2) * 2;
        }

        // Se a1 for maior que a2
        else if (a1 > a2)
        {
            minutos = a2 * 2 + a3 * 4;
        }
    }

    cout << minutos
         << endl;

    return 0;
}
