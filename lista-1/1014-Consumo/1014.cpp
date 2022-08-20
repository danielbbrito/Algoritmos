#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declarar variáveis int X (dist) e float Y (comb)
    int X;
    float Y;

    // Input
    cin >> X
        >> Y;

    // Calcular combustível gasto (float)
    float gasto = X / Y;

    // Output
    cout << fixed
         << setprecision(3)
         << gasto
         << " km/l"
         << endl;

    return 0;
}