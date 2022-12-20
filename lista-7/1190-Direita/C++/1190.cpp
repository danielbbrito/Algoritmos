#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Declarar variáveis
    char o;
    float m[12][12], soma=0;

    cin >> o;

    // Popular matriz
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> m[i][j];

    // Iterar primeira metade da matriz
    for (int l = 1; l <= 5; l++)
        for (int c = 11; c > 11 - l; c--)
            soma += m[l][c];
            
    // Iterar segunda metade da matriz
    for (int k = 6; k <= 10; k++)
        for (int n = k + 1; n <= 11; n++)
            soma += m[k][n];

    if (o == 'S')
        cout << fixed << setprecision(1) << soma << endl;
    
    else
        cout << fixed << setprecision(1) << soma / 30.0 << endl;

    return 0;
}
