#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis N e seq
    int n, seq=0;

    // Input
    cin >> n;

    // Loop para contagem de linhas
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Somar um à seq
            seq++;

            // Imprimir seq
            cout << seq
                 << " ";
        }
        // Pular um valor a não ser impresso
        seq++;

        // Imprimir PUM
        cout << "PUM\n";
    }

    return 0;
}