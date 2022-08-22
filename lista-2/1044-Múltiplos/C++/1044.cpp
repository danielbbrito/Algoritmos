#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int A, B;

    // Input
    cin >> A
        >> B;

    // Verificar se A e B são múltiplos
    if (A % B == 0 || B % A == 0)
    {
        cout << "Sao Multiplos"
             << endl;
        
        return 0;
    }

    // Se não são, imprimir de acordo
    cout << "Nao sao Multiplos"
         << endl;
    
    return 0;
}
