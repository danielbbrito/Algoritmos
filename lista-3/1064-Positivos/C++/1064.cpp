#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variável nums para armazenar input
    float nums;

    // Declarar variáveis e inicializar
    int qtd = 0;
    float soma = 0;

    for (int i = 0; i < 6; i++)
    {
        // Input
        cin >> nums;
        
        // Se nums > 0, aumentar o numero de positivos em um e somar nums em soma 
        if (nums > 0)
        {
            qtd++;
            soma += nums;
        }
    }

    // Output
    cout << qtd
         << " valores positivos\n"
         << fixed
         << setprecision(1)
         << soma / qtd
         << endl;

    return 0;
}
