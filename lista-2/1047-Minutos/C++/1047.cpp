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

    // Se o jogo durar menos de um minuto, return
    if (min_f < 1)
    {
        return 0;
    }

    int horas = min_t / 60;
    int min = min_t % 60;

    // Se o jogo durar 24 horas, é necessário atualizar horas de 0 para 24
    if (h1 == h2 && m1 == m2)
    {
        horas = 24;
    }

    // Se o jogo durar 23 horas, atualizar horas de 0 para 23
    if (min_t < 0 && h1 == h2)
    {
        horas = 23;
    }

    // Se o jogo durar mais de 24 horas, return
    if (horas > 24)
    {
        return 0;
    }

    // Se o jogo durar menos de uma hora (min_t negativos) min deve ser atualizado 
    if (min < 0)
    {
        min = 60 + min_t;
    }


    // Output
    cout << "O JOGO DUROU "
         << horas
         << " HORA(S) E "
         << min
         << " MINUTO(S)"
         << endl;

    return 0;
}
