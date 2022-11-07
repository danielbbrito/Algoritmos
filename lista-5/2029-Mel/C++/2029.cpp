#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variáveis
    double v, d, altura;

    // Ler v e d
    while (true)
    {
        if (cin.eof())
        {
            break;
        }

        cin >> v
            >> d;
            
        double Ab = 3.14 * pow(d / 2, 2);

        // Calcular altura
        altura = v / Ab;
        cout << "ALTURA = "
             << fixed
             << setprecision(2)
             << altura
             << "\n";

        // Calcular área
        cout << "AREA = "
             << Ab
             << endl;;
    }
    return 0;
}