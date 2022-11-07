#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declarar variável
    int n, d, p;
    string dia, mes, ano, dia_evento="32", mes_evento="13", ano_evento="5000";
    bool evento, acontece=false;
    // Loop até EOF
    while (cin >> n >> d)
    {
        // Loop de 0 até d
        for (int i = 0; i < d; i++)
        {
            getline(cin, dia, '/');
            getline(cin, mes, '/');
            getline(cin, ano, ' ');


            // Guardar data atual, apenas se a data for mais cedo que a atual
            if (stoi(dia) < stoi(dia_evento) && stoi(mes) == stoi(mes_evento) || stoi(mes) < stoi(mes_evento) && stoi(ano) == stoi(ano_evento) || stoi(ano) < stoi(ano_evento))
            {
                if (acontece)
                {
                    dia_evento = dia;
                    mes_evento = mes;
                    ano_evento = ano;
                }
            }

            // Loop de 0 até n
            for (int j = 0; j < n; j++)
            {
                cin >> p;

                // Se p == 0, evento == false
                if (p == 0)
                {
                    evento = false;
                }
            }

            if (evento)
            {
                acontece = true;
            }

            evento = true;
        }

        // Se evento == true, imprimir data
        if (acontece)
        {
            cout << dia_evento
                 << "/"
                 << mes_evento
                 << "/"
                 << ano_evento
                 << endl;
        }
        // Se não imprimir "Pizza antes de FdI"
        else
        {
            cout << "Pizza antes de FdI"
                 << endl;
        }
    }

    return 0;
}