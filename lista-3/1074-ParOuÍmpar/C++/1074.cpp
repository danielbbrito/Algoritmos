#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, x;

    // Input 1
    do
    {
        cin >> n;
    }
    while (n > 10000);

    // For loop de 0 a n
    for (int i = 0; i < n; i++)
    {
        //Input 2
        cin >> x;

        // Se x positivo
        if (x > 0)
        {
            // Se x par
            if (x % 2 == 0)
            {
                cout << "EVEN POSITIVE\n";
            }

            // Se x impar
            else
            {
                cout << "ODD POSITIVE\n";
            }
        }

        // Se x negativo
        else if (x < 0)
        {
            // Se x par
            if (x % 2 == 0)
            {
                cout << "EVEN NEGATIVE\n";
            }

            // Se x impar
            else
            {
                cout << "ODD NEGATIVE\n";
            }
        }

        else if (x == 0)
        {
            cout << "NULL\n";
        }
    }

    cout << flush;

    return 0;
}