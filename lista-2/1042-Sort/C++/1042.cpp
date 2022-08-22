#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int a, b, c;

    cin >> a
        >> b
        >> c;

    // Declarar variável buffer
    int buffer;

    // Criar array
    int ordem[3] = {a, b, c};

    // Verificar se ordem[0] é maior que ordem[1]
    if (ordem[0] > ordem[1])
    {
        buffer = ordem[0];
        ordem[0] = ordem[1];
        ordem[1] = buffer;
    }

    // Verificar se ordem[1] é maior que ordem[2]
    if (ordem[1] > ordem[2])
    {
        buffer = ordem[1];
        ordem[1] = ordem[2];
        ordem[2] = buffer;
    }

    // Verificar se ordem[0] é maior que ordem[1]
    if (ordem[0] > ordem[1])
    {
        buffer = ordem[0];
        ordem[0] = ordem[1];
        ordem[1] = buffer;
    }

    // Imprimir ordem crescente
    cout << ordem[0]
         << "\n"
         << ordem[1]
         << "\n"
         << ordem[2]
         << "\n\n";

    // Imprimir original
    cout << a
         << "\n"
         << b
         << "\n"
         << c
         << endl;

    return 0;
}