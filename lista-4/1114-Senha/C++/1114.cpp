#include <iostream>

using namespace std;

int main()
{
    // Declarar variável
    int senha;

    // Loop infinito
    while (true)
    {
        // Input
        cin >> senha;

        // Se senha correta, imprimir "Acesso Perrmitido"
        if (senha == 2002)
        {
            cout << "Acesso Permitido"
                 << endl;
            return 0;
        }

        // Senão, imprimir "Senha Invalida"
        cout << "Senha Invalida\n";
    }
}
