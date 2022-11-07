#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    // Declarar variáveis
    char l;
    int m, n, pares=0;
    vector<pair<int, char>> botas;

    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            // Popular vetor com tamanho e pé de cada bota
            cin >> m >> l;
            botas.push_back(make_pair(m, l));
        }

        // Iterar sobre o vetor
        for (int k = 0; k < botas.size(); k++)
        {
            for (int j = 1; j < botas.size(); j++)
            {
                if (botas[k].first == botas[j].first && botas[k].second != botas[j].second)
                {
                    pares++;
                    botas.erase(botas.begin() + j);
                    continue;
                }
            }
        }

        cout << pares << endl;
        botas.clear();
        pares = 0;
    }

    return 0;
}