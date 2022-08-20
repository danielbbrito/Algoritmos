#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variável raio e const pi
    double raio;
    const double pi = 3.14159;

    // Pegar input
    cin >> raio;

    // Calcular área
    double area = pi * pow(raio, 2);

    // Imprimir
    cout << "A="
         << fixed
         << setprecision(4)
         << area
         << endl;

    return 0;
}