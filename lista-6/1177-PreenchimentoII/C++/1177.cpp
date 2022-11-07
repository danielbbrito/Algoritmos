#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    int t, j=0;
    vector<int> N;

    // Ler valor T
    cin >> t;

    // Até que tamanho de vetor seja 1000, repetir
    while (N.size() < 1000)
    {
        for (int i = 0; i < t; i++)
        {
            N.push_back(i);
        }
    }
    
    for (int i = 0; i < N.size(); i++)
    {
        if (i < 1000)
        {
            cout << "N[" << i << "] = " << N.at(i) << "\n";
        }
    }

    return 0;
}