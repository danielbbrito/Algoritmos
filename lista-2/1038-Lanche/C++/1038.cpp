#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis
    int item, quant;
    float total;

    // Input
    cin >> item
        >> quant;

    // Condicionais
    if (item == 1)
    {
        total = quant * 4.0;

        cout << "Total: R$ "
             << fixed
             << setprecision(2)
             << total
             << endl;

        return 0;
    }

    else if (item == 2)
    {
        total = quant * 4.5;
        cout << "Total: R$ "
             << fixed
             << setprecision(2)
             << total
             << endl;

        return 0;
    }

    else if (item == 3)
    {
        total = quant * 5.0;
        cout << "Total: R$ "
             << fixed
             << setprecision(2)
             << total
             << endl;

        return 0;
    }
    else if (item == 4)
    {
        total = quant * 2.0;
        cout << "Total: R$ "
             << fixed
             << setprecision(2)
             << total
             << endl;

        return 0;
    }

    else if (item == 5)
    {
        total = quant * 1.5;
        cout << "Total: R$ "
             << fixed
             << setprecision(2)
             << total
             << endl;

        return 0;
    }

    return 0;
}
