#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int pos = 0, neg = 0, par = 0, impar = 0, nums = 0;

    // Loop para determinar o que o número é
    for (int i = 0; i < 5; i++)
    {
        // Input
        cin >> nums;

        // Se num > 0, aumentar positivos
        if (nums > 0)
        {
            pos++;
        }

        // Se num < 0, aumentar negativos
        else if (nums < 0)
        {
            neg++;
        }

        // Se nums é par, aumentar pares
        if (nums % 2 == 0)
        {
            par++;
        }

        // Se nums é impar, aumentar impares
        else
        {
            impar++;
        }
    }

    // Output
    cout << par
         << " valor(es) par(es)\n"
         << impar
         << " valor(es) impar(es)\n"
         << pos
         << " valor(es) positivo(s)\n"
         << neg
         << " valor(es) negativo(s)"
         << endl;

    return 0;
}
