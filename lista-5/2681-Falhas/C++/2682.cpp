#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, ant=0, val=0;

    // Ler valores até EOF
    while (cin >> n)
    {
        if (n < ant && val == 0)
            val = ant;
        
        ant = n;
    }

    if (val == 0)
        val = ant;
    cout << val + 1 << endl;
    return 0;
}