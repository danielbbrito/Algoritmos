#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis tempo e velocidade 
    int tempo, vel;

    //Input
    cin >> tempo
        >> vel;

    // Calcular gasto
    float gasto = (tempo * vel) / 12.0;

    // Output
    cout << fixed
         << setprecision(3)
         << gasto
         << endl;

    return 0;
}