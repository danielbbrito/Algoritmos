#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, ant=0, val;

    // Ler valores até EOF
    while (cin >> n)
    {
        if (n > ant)
            val = n;
        
        if (val != 0)
        {
            if (n > val)
            {
                cout << n
                     << endl;

                return 0;
            }
        }

        ant = n;
    }

    cout << val + 1
         << endl;

    return 0;
}