#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variável
    int n;

    // Input
    cin >> n;

    // For loop de 1 até n
    for (int i = 1; i <= n; i++)
    {
        // Imprimir i, i^2, i^3
        cout << i
             << " "
             << pow(i, 2)
             << " "
             << pow(i, 3)
             << endl;
    }

    return 0;
}
