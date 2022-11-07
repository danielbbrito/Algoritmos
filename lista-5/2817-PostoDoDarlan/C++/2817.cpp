#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, m, l, combust=0, aux1=1, aux2=1, maior=0;
    char tipo;
    

    // Ler n, m
    cin >> n >> m;

    // Criar matriz
    char matriz[n][m];

    // Popular matriz
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tipo;

            if (tipo == 'C')
                matriz[i][j] = 25;
            else
                matriz[i][j] = 12;
        }
    }

    // Ler lado do quadrado desejado
    cin >> l;

    cout << combust << endl;

    return 0;
}