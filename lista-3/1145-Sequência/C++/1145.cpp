#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int x, y;
    int num = 0;

    // Input
    cin >> x
        >> y;

    // For loop de 1 até y
    for (int i = 0; i < y / x; i++)
    {
        for (int j = 0; j < x - 1; j++)
        {
            num++;
            cout << num
                 << " ";
        }
        num++;
        cout << num
             << endl;
    }

    return 0;
}