#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int t, pa, pb;
    double g1, g2;

    // Ler t
    cin >> t;

    // Ler todos casos de teste
    for (int caso = 0; caso < t; caso++)
    {
        // Ler valores para pa, pb, g1, g2
        cin >> pa
            >> pb
            >> g1
            >> g2;

        int anos = 0;

        // Calcular crescimento até que pa > pb ou anos > 100
        while (pa <= pb && anos <= 100)
        {
            anos++;
            pa *= 1 + (g1 / 100);
            pb *= 1 + (g2 / 100);
        }

        if (anos <= 100)
        {
            cout << anos
                 << " anos."
                 << endl;
        }
        else
        {
            cout << "Mais de 1 seculo."
                 << endl;
        }
    }

    return 0;
}