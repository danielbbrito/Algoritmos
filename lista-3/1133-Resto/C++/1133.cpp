#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int x, y;

    // Input
    cin >> x
        >> y;

    // For loop de X até Y (for escolhido pois a leitura é mais conveniente)
    if (x < y)
    {
        for (int i = x + 1; i < y; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                cout << i
                     << endl;
            }
        }
    }
    
    else
    {
        for (int i = y + 1; i < x; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                cout << i
                     << endl;
            }
        }
    }

        x++;

    return 0;
}
