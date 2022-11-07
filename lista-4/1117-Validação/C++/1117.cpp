#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis
    float nota1, nota2;

    // Loop infinito 1
    while (true)
    {
        // Input 1
        cin >> nota1;

        // Se nota valida, sair
        if (nota1 >= 0.0 && nota1 <= 10.0)
        {
            break;
        }

        // Senão, imprimir nota invalida
        cout << "nota invalida\n";
    }

    // Loop infinito 2
    while (true)
    {
        // Input 2
        cin >> nota2;

        // Se nota valida, sair
        if (nota2 >= 0.0 && nota2 <= 10.0)
        {
            break;
        }

        // Senão, imprimir nota invalida
        cout << "nota invalida\n";
    }

    // Imprimir média
    cout << "media = "
         << (nota1 + nota2) / 2
         << endl;

    return 0;
}
