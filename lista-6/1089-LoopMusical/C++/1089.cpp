#include <iostream>
#include <vector>
using namespace std;

int picos(vector<int> &amostras);

int main()
{
    // Declarar variáveis
    int n, h, soma;
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

        int s = 0;
        // Analisar primeiro ponto
        if ((amostras.front() > amostras.back() && amostras.front() > amostras[1]) 
        || (amostras.front() < amostras.back() && amostras.front() < amostras[1])) s++;

        // Analisar ultimo ponto
        if ((amostras.back() > amostras.front() && amostras.back() > *(amostras.end() - 1)) 
        || (amostras.back() < amostras.front() && amostras.back() < *(amostras.end() - 1))) s++;

        // Iterar sobre o vetor
        for (int i = 0; i < amostras.size(); i++)
            if ((amostras[i] > amostras[i + 1] && amostras[i] > amostras[i - 1]) || (amostras[i] > amostras[i + 1] && amostras[i] > amostras[i - 1]))
                s++;

        cout << s << endl;
        cin >> n;
    }

    return 0;
}

int picos(vector<int> &amostras)
{
    int s = 0;
    // Analisar primeiro ponto
    if ((amostras.front() > amostras.back() && amostras.front() > amostras[1]) 
    || (amostras.front() < amostras.back() && amostras.front() < amostras[1])) s++;

    // Analisar ultimo ponto
    if ((amostras.back() > amostras.front() && amostras.back() > *(amostras.end() - 1)) 
    || (amostras.back() < amostras.front() && amostras.back() < *(amostras.end() - 1))) s++;

    // Iterar sobre o vetor
    for (int i = 0; i < amostras.size() - 1; i++)
        if ((amostras[i] > amostras[i + 1] && amostras[i] > amostras[i - 1]) || (amostras[i] > amostras[i + 1] && amostras[i] > amostras[i - 1]))
            s++;
        
    return s;
}