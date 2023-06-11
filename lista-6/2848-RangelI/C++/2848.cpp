/**
 * @file 2848.cpp
 * @author NoneCoding (danieldebrito2105@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    // Declarar variáveis
    int n, q, l, r, k, g, d;

    // Ler tamanho do vetor e qtd de rodadas
    cin >> n
        >> q;

    // Criar vetor de tamanho N
    int vetor[n];

    // Popular vetor
    for (int i = 0; i < n; i++)
        cin >> vetor[i];

    // Realizar rodadas
    for (int i = 0; i < q; i++)
    {
        // Declarar contador de cada número
        int qtd = 0;

        // Ler delimitadores, k valor escolhido e os palpites
        cin >> l
            >> r
            >> k
            >> g
            >> d;
        
        int kesimo;
        if (r - l > 0)
        {
            // Criar uma cópia do intervalo
            int vetorCopia[r];
            for (int j = 0, k = l - 1; j < r; j++, k++)
                vetorCopia[j] = vetor[k];

            // Ordenar intervalo e determinar k esimo menor elemento
            for (int j = 0; j <= k && j < r - 1; j++)
            {
                int menor = 0;
                for (int k = j; k < r; k++)
                {
                    if (vetorCopia[k] < vetorCopia[menor])
                        menor = k;
                }

                int aux = vetorCopia[j];
                vetorCopia[j] = vetorCopia[menor];
                vetorCopia[menor] = aux;
                kesimo = vetorCopia[j];
            }
        }

        else
            kesimo = vetor[l - 1];

        // Contar quantas vezes o k esimo ocorre
        for (int j = l - 1; j < r; j++)
        {
            if (vetor[j] == kesimo)
                qtd++;
        }
        

        // Imprimir resultados
        cout << kesimo << " " << qtd;
        if (abs(g - qtd) < abs(d - qtd))
            cout << " G\n";
        
        else if (abs(d - qtd) < abs(g - qtd))
            cout << " D\n";
        
        else
            cout << " E\n";
    }

    cout << flush;

    return 0;
}