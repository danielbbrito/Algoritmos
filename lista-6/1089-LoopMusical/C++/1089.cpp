#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, h, picos=0;
    vector<int> amostras;

    // Ler n
    cin >> n;

    while (n != 0)
    {
        // Popular vetor
        for (int i = 0; i < n; i++)
        {
            cin >> h;

            amostras.push_back(h);
        }

        // Verificar primeira amostra, verificar restante
        if ((amostras.front() < amostras.back() && amostras.front() < amostras[1]) || (amostras.front() > amostras.back() && amostras.front() > amostras[1]))
        {
            picos++;
        }



        for (auto itr = amostras.begin() + 1; itr != amostras.end(); itr++)
        {
            if (*(itr - 1) < *itr && *(itr + 1) < *itr || *(itr - 1) > *itr && *(itr + 1) > *itr)
            {
                picos++;
            }
        }

        cout << picos << endl;

        picos = 0;
        amostras.clear();

        cin >> n;
    }

        return 0;
}