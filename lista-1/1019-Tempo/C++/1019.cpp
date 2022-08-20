#include <iostream>

using namespace std;

int main()
{
    // Declarar variável N
    int N;

    // Input
    cin >> N;

    // Converter para minutos
    int minutos = N / 60;

    // Segundos restantes
    int segundos = N % 60;

    // Converter para horas
    int horas = minutos / 60;

    // Minutos restantes
    minutos = minutos % 60;

    // Output
    cout << horas
         << ":"
         << minutos
         << ":"
         << segundos
         << endl;

    return 0;
}