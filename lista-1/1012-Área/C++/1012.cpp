#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Declarar variavéis A, B e C
    double A, B, C;

    // Declara pi constante
    const double pi = 3.14159;

    // Pegar o input
    cin >> A
        >> B
        >> C;

    // Calcular área do triângulo de base A e altura C
    const double triangulo = (A * C) / 2;

    // Calcular área do círculo de raio C
    const double circulo = pi * pow(C, 2);

    // Calcular área do trapézio de A e B por bases e C por altura
    const double trapezio = ((A + B) * C) / 2;

    // Calcular área do quadrado de lado B
    const double quadrado = pow(B, 2);

    // Calcular área do retângulo de lados A e B
    const double retangulo = A * B;

    // Output 3 digitos após ponto decimal
    cout << fixed
         << setprecision(3)
         << "TRIANGULO: "
         << triangulo
         << "\nCIRCULO: "
         << circulo
         << "\nTRAPEZIO: "
         << trapezio
         << "\nQUADRADO: "
         << quadrado
         << "\nRETANGULO: "
         << retangulo
         << endl;

    return 0;
}