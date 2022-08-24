#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, x, y;

    // Input 1
    cin >> n;

    // For loop de 0 até n
    for (int i = 0; i < n; i++)
    {
        // Input 2
        cin >> x
            >> y;
        
        // Se y == 0 escrever divisao impossivel
        if (y == 0)
        {
            cout << "divisao impossivel"
                 << endl;
        }

        // Do contrario imprimir divisao
        else
        {
            cout << fixed
                 << setprecision(1)
                 << x / float(y)
                 << endl;
        }
    }

    return 0;
}
