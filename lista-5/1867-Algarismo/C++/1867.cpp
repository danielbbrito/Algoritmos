#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declarar variáveis
    long long m, n, aux=0;

    // Ler m, n
    cin >> m >> n;

    // Repetir até que entrada seja 0
    while (m != 0 && n != 0)
    {
        // Verificar primeiro número
        while (to_string(m).length() > 1)
        {
            string m_str = to_string(m);

            for (int i = 0; i < m_str.length(); i++)
            {
                aux += (int)(m_str[i] - 48);
            }

            m = aux;
            aux = 0;
        }

        while (to_string(n).length() > 1)
        {  
            string n_str = to_string(n);

            for (int j = 0; j < n_str.length(); j++)
            {
                aux += (int)(n_str[j] - 48);
            }

            n = aux;
            aux = 0;
        }

        if (m > n)
        {
            cout << 1 << endl;
        }
        else if (m < n)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }

        cin >> m >> n;
    }
    return 0;
}