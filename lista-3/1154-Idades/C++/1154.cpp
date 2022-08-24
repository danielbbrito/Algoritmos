#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis
    int idade, soma=0, qtd=0;

    // Loop infinito
    while (true)
    {
        // Input
        cin >> idade;

        // Se negativo, sair do loop
        if (idade < 0)
        {
            break;
        }

        // Somar à soma e qtd
        soma += idade;
        qtd++;
    }

    // Output
    cout << fixed
         << setprecision(2)
         << soma / float(qtd)
         << endl;

    return 0;
}
