#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    // Declarar variáveis
    char aux_l;
    int n, aux_m, pares=0;
    vector<int> m;
    vector<char> l;
    // Ler n
    while (cin >> n)
    {
        // Popular vetores
        for (int i = 0; i < n; i++)
        {
            cin >> aux_m;
            m.push_back(aux_m);

            cin >> aux_l;
            l.push_back(aux_l);
        }

        for (int j = 0; j < m.size(); j++)
        {
            for (int k = j + 1; k < m.size(); k++)
            {
                if (m[j] == m[k] && l[j] != l[k])
                {
                    pares++;
                    m.erase(m.begin() + k);
                    l.erase(l.begin() + k);
                    continue;
                }
            }
        }

        cout << pares << "\n";
        m.clear();
        m.shrink_to_fit();
        l.clear();
        l.shrink_to_fit();
        pares = 0;
    }
    return 0;
}