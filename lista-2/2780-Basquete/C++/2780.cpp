#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis D e ponto
    int D, ponto;

    // Input
    cin >> D;

    // Verificar se cesta foi feita até 800cm
    if (D <= 800)
    {
        ponto = 1;
    }

    // Verificar se cesta foi feita entre 801 e 1400 cm
    if (800 < D && D <= 1400)
    {
        ponto = 2;
    }

    // Verificar se cesta foi feita entre 1401 e 2000 cm
    if (1400 < D && D <= 2000)
    {
        ponto = 3;
    }

    // Output
    cout << ponto
         << endl;

    return 0;
}
