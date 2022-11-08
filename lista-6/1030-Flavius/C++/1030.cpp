#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declarar variaveis
    int nc, n, k, ultimo;
    vector<int> soldados;

    // Ler numero de casos
    cin >> nc;

    // Repetir para cada caso de teste
    for (int i = 0; i < nc; i++)
    {
        // Ler n, k
        cin >> n >> k;

        // Popular vetor de tamanho n
        for (int j = 1; j <= n; j++)
        {
            soldados.push_back(j);
        }

        // Eliminar cada um dos elementos, com salto, iniciando pelo elemento k
        int j = 0;
        while (soldados.size() > 1)
        {
            soldados.erase(soldados.begin() + ((j + k) % soldados.size()));
            j++;
        }

        cout << "Case " << n << ": " << soldados.back();

    }

    return 0;
}