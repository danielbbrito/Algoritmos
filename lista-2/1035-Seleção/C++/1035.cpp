#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int A, B, C, D;

    // Input
    cin >> A
        >> B
        >> C
        >> D;

    // Estabelecer condicional
    if (B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 == 0)
    {
        cout << "Valores aceitos"
             << endl;
    }
    else
    {
        cout << "Valores nao aceitos"
             << endl;
    }

    return 0;
}