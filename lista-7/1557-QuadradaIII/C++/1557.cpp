#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Declarar variáveis
    int n;
    int quad[15][15];

    int mult = 1;
    for (int i = 0; i < 15; i++)
    {
        quad[i][0] = 1 * mult;

        for (int j = 1; j < 15; j++)
            quad[i][j] = quad[i][j - 1] * 2;

        mult *= 2;
    }

    cin >> n;

    while (n != 0)
    {
        // Descobrir qd de caracteres
        int espacos = 1;
        int last = quad[n - 1][n - 1];
        while (last / 10 != 0)
        {
            espacos++;
            last /= 10;
        }

        for (int i = 0; i < n; i++)
        {
            cout << setw(espacos) << quad[i][0];
            for (int j = 1; j < n; j++)
            {
                cout << ' ' << setw(espacos) << to_string(quad[i][j]);
            }
            cout << '\n';
        }
        cout << '\n';
        cin >> n;
    }

    return 0;
}