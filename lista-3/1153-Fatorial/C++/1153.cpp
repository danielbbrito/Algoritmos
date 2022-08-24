#include <iostream>

using namespace std;

int Fact(int n);

    int main()
{
    /* Declarar variáveis N armazena o número para calcular
    o fatorial e fator armazenará o fatorial de N*/
    int N, fator;

    // Input
    do
    cin >> N;
    while (N < 0 || N > 13);

    // Atribuir valor inicial N à fator
    fator = N;

    // For loop de 1 até N(
    for (int i = 1; i < N; i++)
    {
        // Atualizar valor de fator
        fator *= (N - i);
    }
    
    cout << fator
         << endl;
    
    return 0;
}
