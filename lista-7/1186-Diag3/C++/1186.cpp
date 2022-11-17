#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variaveis
    char o;
    float m[12][12], soma=0;

    // Ler operacao
    cin >> o;

    // Popular matriz
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> m[i][j];

    for (int l = 11; l > 0; l--)
        for (int c = 12 - l; c < 12; c++)
            soma += m[l][c];
    
    if (o == 'S')
        cout << fixed << setprecision(1) << soma << endl;
    
    else
        cout << fixed << setprecision(1) << soma / 66.0 << endl;

    return 0;
}