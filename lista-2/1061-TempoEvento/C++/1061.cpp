#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declarar variáveis
    int dia1, dia2;
    int h1, m1, s1, h2, m2, s2;
    char colon;
    string dia, _dia;

    // Input 1
    cin >> dia
        >> dia1;

    cin >> h1
        >> colon
        >> m1
        >> colon
        >> s1;

    cin >> _dia
        >> dia2;

    cin >> h2
        >> colon
        >> m2
        >> colon
        >> s2;

    // Converter tempo1 para segundos
    int segundos_f1 = (dia1 * 86400) + (h1 * 3600) + (m1 * 60) + s1;
    int segundos_f2 = (dia2 * 86400) + (h2 * 3600) + (m2 * 60) + s2;
    int segundos_t = segundos_f2 - segundos_f1;

    // Conversão para segundos, minutos, horas e dias
    int dias = segundos_t / 86400;
    int horas = (segundos_t / 3600) % 24;
    int minutos = (segundos_t / 60) % 60;
    int segundos = segundos_t % 60;

    // Output
    cout << abs(dias)
         << " dia(s)\n"
         << abs(horas)
         << " hora(s)\n"
         << abs(minutos)
         << " minuto(s)\n"
         << abs(segundos)
         << " segundo(s)"
         << endl;
    
    return 0;
}
