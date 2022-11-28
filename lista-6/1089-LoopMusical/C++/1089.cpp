#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, h, picos;
    vector<int> amostras;

    // Ler n
    cin >> n;

    while (n != 0)
    {
        picos = 0;
        // Popular vetor
        for (int i = 0; i < n; i++)
        {
            cin >> h;

            amostras.push_back(h);
        }

        // verificar primeiro ponto
        if ((amostras.front() > amostras[1] && amostras.front() > amostras.back()) || (amostras.front() < amostras[1] && amostras.front() < amostras.back()))
            picos++;

        // Verificar ultimo ponto
        if ((amostras.back() > amostras.front() && amostras.back() > *(amostras.end() - 1)) || (amostras.back() < amostras.front() && amostras.back() < *(amostras.end() - 1)))
            picos++;
        

        for (int i = 1; i < amostras.size() - 1; i++)
        {
            if ((amostras[i] > amostras[i + 1] && amostras[i] > amostras[i - 1]) || (amostras[i] < amostras[i + 1] && amostras[i] < amostras[i - 1]))
                picos++;
        }

        if (n == 2)
            picos = 2;
            
        cout << picos << endl;
        cin >> n;
    }

        return 0;
}