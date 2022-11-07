#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, time1, time2, total1, total2, mais;
    char x;

    // Ler valor para n
    cin >> n;

    // Repetir até n, depois repetir até dois, calcular pontuação acumulada
    for (int i = 0; i < n; i++)
    {
        total1 = 0;
        total2 = 0;

        cin >> time1
            >> x
            >> time2;

        mais = 0;

        total1 += time1;
        total2 += time2;

        cin >> time2 
            >> x 
            >> time1;

        if (time1 > total2)
        {
            mais = 1;
        }
        else if (total2 > time1)
        {
            mais = 2;
        }

        total1 += time1;
        total2 += time2;


        if (total1 > total2)
        {
            cout << "Time 1\n";
        }
        else if (total1 < total2)
        {
            cout << "Time 2\n";
        }
        else
        {
            if (total1 - total2 > 0)
            {
                cout << "Time 1\n";
            }
            else if (total1 - total2 < 0)
            {
                cout << "Time 2\n";
            }
            else if (mais == 1)
            {
                cout << "Time 1\n";
            }
            else if (mais == 2)
            {
                cout << "Time 2\n";
            }
            else
            {
                cout << "Penaltis\n";
            }
        }
        
    }

    cout << flush;

    return 0;
}