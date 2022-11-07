#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, h, h_ant;
    vector<char> PicoVale;

    // Ler n
    cin >> n;
    cin >> h_ant;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> h;

        if (h_ant > h)
        {
            PicoVale.push_back('V');

            h_ant = h;
        }

        else if (h_ant < h)
        {
            PicoVale.push_back('P');

            h_ant = h;
        }

        else
        {
            PicoVale.push_back('I');
        }
    }

    for (auto itr = PicoVale.begin(); itr != PicoVale.end(); itr++)
    {
        if (*(itr - 1) == *itr || *itr == 'I')
        {
            cout << 0 << endl;
            return 0;
        }
    }

    cout << 1 << endl;
    return 0;
}