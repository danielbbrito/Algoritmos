/* REVISITAR ESSA SOLUÇÃO*/


#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variáveis
    double A, B, C;

    // Input
    do
    cin >> A
        >> B
        >> C;
    while (A <= 0 || B <= 0 || C <= 0);

    double lados[3] = {A, B, C};

    // Declarar buffer
    double buffer;

    // Verificar se lados[0] é maior que lados[1]
    if (lados[0] < lados[1])
    {
        buffer = lados[0];
        lados[0] = lados[1];
        lados[1] = buffer;
    }

    // Verificar se lados[1] é maior que lados[2]
    if (lados[1] < lados[2])
    {
        buffer = lados[1];
        lados[1] = lados[2];
        lados[2] = buffer;
    }

    // Verificar se lados[0] é maior que lados[1]
    if (lados[0] < lados[1])
    {
        buffer = lados[0];
        lados[0] = lados[1];
        lados[1] = buffer;
    }

    // Verificar o tipo de triângulo
    if (lados[0] >= lados[1] + lados[2])
    {
        cout << "NAO FORMA TRIANGULO\n";
        return 0;
    }

    if (pow(lados[0], 2) == pow(lados[1], 2) + pow(lados[2], 2))
    {
        cout << "TRIANGULO RETANGULO\n";
    }

    if (pow(lados[0], 2) > pow(lados[1], 2) + pow(lados[2], 2))
    {
        cout << "TRIANGULO OBTUSANGULO\n";
    }

    if (pow(lados[0], 2) < pow(lados[1], 2) + pow(lados[2], 2))
    {
        cout << "TRIANGULO ACUTANGULO\n";
    }

    if (A == B && B == C)
    {
        cout << "TRIANGULO EQUILATERO\n";
    }

    if (A == B && A != C && B != C  || A == C && A != B && C != B 
    || B == C && B != A && C != A)
    {
        cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}