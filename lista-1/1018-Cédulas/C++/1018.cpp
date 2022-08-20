#include <iostream>

using namespace std;

int main()
{
    // Declarar variável N
    int N;

    // Atribuir valor à N
    do
        cin >> N;
    while (N < 0 || N > 1000000);

    // Armazenar valor total de notas
    const int notas = N;

    // Calcular cédulas de 100
    int cem = N / 100;
    N -= cem * 100;

    // Calcular cédulas de 50
    int cinq = N / 50;
    N -= cinq * 50;
    // Calcular cédulas de 20
    int vinte = N / 20;
    N -= vinte * 20;
    // Calcular cédulas de 10
    int dez = N / 10;
    N -= dez * 10;

    // Calcular cédulas de 5
    int cinco = N / 5;
    N -= cinco * 5;

    // Calcular cédulas de 2
    int dois = N / 2;
    N -= dois * 2;

    // Calcular cédulas de 1
    int um = N / 1;
    N -= um * 1;

    // Output
    cout << notas
         << "\n"
         << cem
         << " nota(s) de R$ 100,00\n"
         << cinq
         << " nota(s) de R$ 50,00\n"
         << vinte
         << " nota(s) de R$ 20,00\n"
         << dez
         << " nota(s) de R$ 10,00\n"
         << cinco
         << " nota(s) de R$ 5,00\n"
         << dois
         << " nota(s) de R$ 2,00\n"
         << um
         << " nota(s) de R$ 1,00"
         << endl;

    return 0;
}