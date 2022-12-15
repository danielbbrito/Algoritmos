#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis
    char o;
    float m[12][12], soma = 0, qtd;

    // Ler operação
    cin >> o;

    // Popular matriz
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }

    // Somar todos os elementos desejados
    for (int l = 0; l < 12; l++)
    {
        for (int c = l + 1; c < 12; c++)
        {
            soma += m[l][c];
        }
    }

    // Imprimir resultado, de acordo com a operação desejada
    if (o == 'S')
        cout << fixed << setprecision(1) << soma << endl;
    else
        cout << fixed << setprecision(1) << soma / 66.0 << endl;

    return 0;
}