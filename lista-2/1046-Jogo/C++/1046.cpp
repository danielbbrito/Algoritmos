#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variáveis
    int h1, h2;

    // Input
    cin >> h1
        >> h2;

    // Declarar duração
    int dur;

    // Se h1 maior que h2 (tarde/noite em h1 e manhã/tarde em h2)
    if (h1 > h2)
    {
        dur = 24 - h1 + h2;
    }
    // Se não, subtrair h2 e h1
    else
    {
        dur = h2 - h1;
    }

    // Se dur == 0, dur == 24
    if (h1 == h2)
    {
        dur = 24;
    }

    // Se dur > 24, retorne
    if (dur > 24)
    {
        return 0;
    }

    // Output
    cout << "O JOGO DUROU "
         << abs(dur)
         << " HORA(S)"
         << endl;

    return 0;
}
