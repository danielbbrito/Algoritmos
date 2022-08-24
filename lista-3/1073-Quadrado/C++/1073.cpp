#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variáveis
    int N;

    // Input
    do
    {
        cin >> N;
    }
    while (N <= 5 && N >= 2000);

    // For loop para averiguar pares de 1 - N
    for (int i = 1; i <= N; i++)
    {
        // Verificar se é par e se for, imprimir quadrado
        if (i % 2 == 0)
        {
            cout << i
                 << "^2 = "
                 << fixed
                 << setprecision(0)
                 << pow(i ,2)
                 << "\n";
        }
    }

    return 0;
}
