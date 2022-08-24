#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int maior, posicao, valor;

    // For loop de 1 a 100
    for (int i = 1; i <= 100; i++)
    {
        cin >> valor;

        if (valor > maior)
        {
            maior = valor;
            posicao = i;
        }
    }
    cout << maior
         << "\n"
         << posicao
         << endl;

    return 0;
}