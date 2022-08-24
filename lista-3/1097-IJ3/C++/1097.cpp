#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int i = 1;
    int j = 7;

    // Loop while
    while (j != 17)
    {
        // Remover 1 de j, duas vezes, imprimindo i e j a cada incremento
        for (int k = 0; k < 3; k++)
        {
            cout << "I="
                 << i
                 << " J="
                 << j
                 << endl;
            
            j--;
        }

        // Adicionar 2 a i
        i += 2;

        // Adicionar 4 a j
        j += 5;
    }

    return 0;
}
