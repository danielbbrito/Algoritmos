#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variáveis
    float x1, y1, x2, y2;

    // Input 1
    cin >> x1
        >> y1;

    // Input 2
    cin >> x2
        >> y2;

    // Calcular distância
    float dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Imprimir distância
    cout << fixed
         << setprecision(4)
         << dist
         << endl;

    return 0;
}