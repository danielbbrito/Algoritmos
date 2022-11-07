#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    int n;
    double gd;
    string nome;

    // Input 1
    cin >> n;
    
    for (int competidor = 0; competidor < n; competidor++)
    {
        // Declarar variáveis
        double notatotal = 0, maior = 0, menor = 10;

        // Declarar vetor
        vector<double> notas;
        notas.reserve(7);

        // Ler nome
        cin >> nome;

        // Ler gd
        cin >> gd;

        // Ler notas e somar
        for (int nota = 0; nota < 7; nota++)
        {
            cin >> notas[nota];
            if (notas[nota] > maior)
            {
                maior = notas[nota];
            }
            if (notas[nota] < menor)
            {
                menor = notas[nota];
            }

            notatotal += notas[nota];
        }

        // Output, removendo de nota total a maior e menor nota
        cout << nome
             << " "
             << fixed
             << setprecision(2)
             << (notatotal - menor - maior) * gd
             << endl;
    }

    return 0;
}