/*SEGFAULT*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, 
        r, 
        e;

    vector<int> reac, 
                escrita,
                temp;

    string s;

    // Ler valor n
    cin >> n;

    // Construir vetor de reação e de escrita
    for (int i = 0; i < n; i++)
    {
        cin >> r;
        reac.push_back(r);

        cin >> e;
        escrita.push_back(e);
    }

    // Ler string de entrada
    cin >> s;

    // Calcular quão longa é a string
    int s_len = s.length();

    // Contruir vetor de tempo de escrita
    for (int j = 0; j < n; j++)
    {
        temp.push_back(reac.at(j) + (escrita.at(j) * s_len));
    }

    // Inicializar contador de rodadas
    int count = 0;

    // Limpar vetor reac
    reac.clear();

    while (temp.size() >= 1)
    {
        // Contabilizar rodada
        count++;

        if (temp.size() == 1)
        {
            reac.push_back(count);
            break;
        }

        // Realizar rodada
        for (int k = 0; k < temp.size(); k++)
        {
            if (temp.at(k) > temp.at(k + 1))
            {
                // Remover elemento perdedor
                temp.erase(temp.begin() + k);

                // Utilizar vetor de reação para armazenar rodada do participante
                reac.insert(reac.begin() + k, count);
            }
            else
            {
                // Remover elemento perdedor
                temp.erase(temp.begin() + k + 1);

                // Utilizar vetor de reação para armazenar rodada do participante
                reac.insert(reac.begin() + k + 1, count);
            }
        }
    }

    for (auto itr = reac.begin(); itr != reac.end(); itr++)
    {
        cout << *itr << " ";
    }

    cout << endl;

    return 0;
}