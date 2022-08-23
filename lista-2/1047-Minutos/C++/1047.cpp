/*REVISITAR ESSA SOLUÇÃO*/
#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int h1, m1, h2, m2;

    // Input
    cin >> h1
        >> m1
        >> h2
        >> m2;

    // Calcular horas e minutos
    int min_i = h1 * 60 + m1;
    int min_f = h2 * 60 + m2;

    int min_t = min_f - min_i;

    // Minutos totais para horas
    int horas = abs(min_t) / 60;
    int minutos = abs(min_t) % 60;

    // Se min_t == 0, atualizar valor de horas
    if (min_t == 0)
    {
        horas = 24;
    }

    /* Se m1 > m2 e h1 == h2 out h1 > h2, 
    atualizar o valor de horas e de minutos para impedir erros*/
    else if (h1 == h2 && m1 > m2 || h1 > h2)
    {
        horas = 24 - (h1 - h2) - 1;

        if (horas == 24)
        {
            horas = 23;
        }

        minutos = 60 - (m1 - m2);

        if (minutos >= 60)
        {
            minutos -= 60;
        }
    }

    
    // Output
    cout << "O JOGO DUROU "
         << horas
         << " HORA(S) E "
         << minutos
         << " MINUTO(S)"
         << endl;

    return 0;
}
