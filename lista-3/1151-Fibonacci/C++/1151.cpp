#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, num1 = 0, num2 = 1, num3;

    // Input
    cin >> n;

    // Escrever número constantes na sequência
    cout << 0
         << " "
         << 1
         << " ";

    // For loop de 0 a n
    for (int i = 0; i < n - 3; i++)
    {
        num3 = num1 + num2;
        cout << num3
             << " ";
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
    num3 = num1 + num2;
    cout << num3
         << endl;
    return 0;
}
