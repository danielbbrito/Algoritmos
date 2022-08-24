#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis
    int n;

    // Input
    do
    cin >> n;
    while (n > 10000);

    // Loop de 1 a 10000
    for (int i = 1; i <= 10000; i++)
    {
        // Se i % N == 2, imprimir
        if (i % n == 2)
        {
            cout << fixed
                 << setprecision(0)
                 << i
                 << "\n";
        }
    }
    cout << flush;
    
    return 0;
}
