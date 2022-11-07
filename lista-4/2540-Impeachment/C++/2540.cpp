#include <iostream>

using namespace std;

int main()
{
    // Declarar n
    int n;

    while (cin >> n)
    {
        // Declarar voto favor e contra
        int voto, favor = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> voto;

            // se voto for 1, incrementar favor
            if (voto == 1)
            {
                favor++;
            }
        }

        // Imprimir resultados
        if (favor >= ((n * 2) / 3.0))
        {
            cout << "impeachment" << endl;
        }
        else
        {
            cout << "acusacao arquivada" << endl;
        }
    }

    return 0;
}