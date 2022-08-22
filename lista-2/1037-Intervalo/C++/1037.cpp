#include <iostream>

using namespace std;

int main()
{
    // Declarar variável
    float num;

    // Input
    cin >> num;

    // Verificar intervalos
    if (0 <= num && num <= 25)
    {
        cout << "Intervalo [0,25]"
             << endl;

        return 0;
    }

    else if (25 < num && num <= 50)
    {
        cout << "Intervalo (25,50]"
             << endl;

        return 0;
    }

    else if (50 < num && num <= 75)
    {
        cout << "Intervalo (50,75]"
             << endl;

        return 0;
    }

    else if (75 < num && num <= 100)
    {
        cout << "Intervalo (75,100]"
             << endl;

        return 0;
    }
    
    // Output caso todas as condições sejam falsas
    cout << "Fora de intervalo"
         << endl;
    
    return 0;
}
