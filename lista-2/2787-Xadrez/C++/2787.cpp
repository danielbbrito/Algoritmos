#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int L, C, cor;

    // Input
    do
    {
        cin >> L;
    } 
    while (L < 1 && L > 1000);

    do
    {
        cin >> C;
    }
    while (C < 1 && C > 1000);

    // Verificar cor, baseado na paridade de L e C
    if (L % 2 == 0 && C % 2 == 0)
    {
        cor = 1;
    }

    else if (L % 2 == 0 && C % 2 != 0)
    {
        cor = 0;
    }

    else if (L % 2 != 0 && C % 2 == 0)
    {
        cor = 0;
    }
    
    else if (L % 2 != 0 && C % 2 != 0)
    {
        cor = 1;
    }


    // Output
    cout << cor
         << endl;
    
    return 0;
}
