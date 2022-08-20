#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis
    int c1, n1, c2, n2;
    float p1, p2;

    // Atribuir valores 1
    cin >> c1
        >> n1
        >> p1;

    // Atribuir valores 2
    cin >> c2
        >> n2
        >> p2;

    // Calcular valor a ser pago
    float valor = n1 * p1 + n2 * p2;

    // Imprimir
    cout << "VALOR A PAGAR: R$ "
         << fixed
         << setprecision(2)
         << valor
         << endl;

    return 0;
}