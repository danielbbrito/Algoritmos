#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variáveis
    int c, n, soma;

    // Ler c
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        // Ler n, c vezes
        cin >> n;

        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        // Testar números, a partir de 2
        int j;
        for (j = 2; soma != n; j++)
        {
            soma = 2;

            int x = sqrt(j);
            for (int k = 2; k < x; k++)
                if (j % k == 0)
                {
                    soma += 2;
                }
            if (x * x == j)
                soma++;
            
        }

        cout << (j - 1) % 1000000007 << endl;
    }

    return 0;
}