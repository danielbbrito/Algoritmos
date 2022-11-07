#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    long long m, n, f1, f2;

    // Ler M e N até EOF
    while (cin >> m >> n)
    {
        f1 = 1;
        f2 = 1;

        for (int i = 1; i <= m; i++)
        {
            f1 *= i;
        }

        for (int j = 1; j <= n; j++)
        {
            f2 *= j;
        }

        cout << f1 + f2
             << "\n";
    }

    cout << flush;
    return 0;
}

