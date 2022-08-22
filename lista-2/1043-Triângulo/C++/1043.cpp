#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variáveis
    float A, B, C;

    // Input
    cin >> A
        >> B
        >> C;

    // Verificar possibilidade de triângulo
    if (A > abs(B - C) && A < B + C)
    {
        cout << "Perimetro = "
             << fixed
             << setprecision(1)
             << A + B + C
             << endl;

        return 0; 
    }

    // Caso não seja possível, calcular a área
    float area = ((A + B) * C) / 2;

    cout << "Area = "
         << fixed
         << setprecision(1)
         << area
         << endl;
    
    return 0;


}
