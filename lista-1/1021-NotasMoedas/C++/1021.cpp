#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variável N
    float N;

    // Input
    do
    cin >> N;
    while (N < 0 || N > 1000000.00);

    // Declarar e inicializar variáveis de notas
    // Atualizar valor de N
    int cem = N / 100;
    N -= cem * 100;

    int cinq = N / 50;
    N -= cinq * 50;

    int vinte = N / 20;
    N -= vinte * 20;

    int dez = N / 10;
    N -= dez * 10;

    int cinco = N / 5;
    N -= cinco * 5;

    int dois = N / 2;
    N -= dois * 2;

    // Declarar e inicializar variáveis de notas
    // Atualizar valor de N
    int um = N / 1;
    N -= um * 1;

    int zerocinq = N / 0.5;
    N -= zerocinq  * 0.5;
    
    int zerovinte = N / 0.25;
    N -= zerovinte * 0.25;

    int zerodez = N / 0.1;
    N -= zerodez * 0.1;

    int zerocinco = N / 0.05;
    N -= zerocinco * 0.05;

    int zeroum = N / 0.01;
    N -= zeroum * 0.01;
    
    // O problema arredonda nos casos de teste aparentemente
    if (N >= 0.009)
    {
        zeroum++;
    }

    cout << "NOTAS:\n"
         << cem
         << " nota(s) de R$ 100.00\n"
         << cinq
         << " nota(s) de R$ 50.00\n"
         << vinte
         << " nota(s) de R$ 20.00\n"
         << dez
         << " nota(s) de R$ 10.00\n"
         << cinco
         << " nota(s) de R$ 5.00\n"
         << dois
         << " nota(s) de R$ 2.00\n"
         << "MOEDAS:\n"
         << um
         << " moeda(s) de R$ 1.00\n"
         << zerocinq
         << " moeda(s) de R$ 0.50\n"
         << zerovinte
         << " moeda(s) de R$ 0.25\n"
         << zerodez
         << " moeda(s) de R$ 0.10\n"
         << zerocinco
         << " moeda(s) de R$ 0.05\n"
         << zeroum
         << " moeda(s) de R$ 0.01\n"
         << endl;
    
    return 0;
}