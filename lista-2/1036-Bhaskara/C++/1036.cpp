#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variáveis
    double A, B, C;

    // Input
    cin >> A
        >> B
        >> C;
    
    // Calcular delta
    double delta = pow(B, 2) - 4 * A * C;

    // Verificar possibilidade de operação
    if (A == 0 || delta < 0)
    {
        cout << "Impossivel calcular"
             << endl;
        
        return 0;
    }

    // Realizar operação
    double R1 = (-B + sqrt(delta)) / (2 * A);
    double R2 = (-B - sqrt(delta)) / (2 * A);

    // Output
    cout << fixed
         << setprecision(5)
         << "R1 = "
         << R1
         << "\nR2 = "
         << R2
         << endl;
    
    return 0;
}