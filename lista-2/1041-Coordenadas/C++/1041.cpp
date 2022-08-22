#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    float x, y;

    // Input
    cin >> x
        >> y;

    // Verificar quadrante
    if (x > 0 && y > 0)
    {
        cout << "Q1"
             << endl;
    }

    else if (x < 0 && y > 0)
    {
        cout << "Q2"
             << endl;
    }

    else if (x < 0 && y < 0)
    {
        cout << "Q3"
             << endl;
    }

    else if (x > 0 && y < 0)
    {
        cout << "Q4"
             << endl;
    }

    else if (x == 0 && y != 0)
    {
        cout << "Eixo Y"
             << endl;
    }

    else if (x != 0 && y == 0)
    {
        cout << "Eixo X"
             << endl;
    }

    else
    {
        cout << "Origem"
             << endl;
    }

    return 0;
}
