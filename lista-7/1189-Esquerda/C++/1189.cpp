#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis
    char op;
    float m[12][12], soma=0;
    
    cin >> op;

    // Ler matriz
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> m[i][j];

    // Iterar sobre a matriz até prim. metade
    for (int i = 1; i <= 5; i++)
        for (int j = 0; j < i; j++)
            soma += m[i][j];

    
    
    // Iterar sobre a matriz até a segunda metade
    for (int i = 6; i <= 10; i++)
        for (int j = 0; j < 11 - i; j++)
            soma += m[i][j];

    if (op == 'S') cout << fixed << setprecision(1) << soma << endl;

    else cout << fixed << setprecision(1) << soma / 30.0 << endl;

    return 0;
}