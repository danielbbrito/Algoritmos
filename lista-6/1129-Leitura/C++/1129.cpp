#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, nota, cont=0;
    vector<int> notas;

    // Ler n
    cin >> n;

    while (n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> nota;

                if (nota <= 127)
                {
                    notas.push_back(nota);
                    cont = j;
                }
            }

            if (notas.size() == 1)
                cout << (char)(cont + 65) << "\n";
            else
                cout << "*\n";

            notas.clear();
        }
        cin >> n;
    }

    return 0;
}