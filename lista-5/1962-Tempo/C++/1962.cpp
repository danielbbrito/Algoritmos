#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, t;

    // Ler n
    cin >> n;

    // Repetir de 0 até n, lendo t e calculando o ano do evento
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        int a = 2015 - t;

        if (a > 0)
        {
            cout << a 
                 << " D.C.\n";
        }
        else
        {
            cout << abs(a - 1)
                 << " A.C.\n";
        }
    }

    cout << flush;

    return 0;
}