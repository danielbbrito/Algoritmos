#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    bool is_f=false, f_before=false;
    char c;
    vector<char> f {'j', 'p', 's', 'v', 'b', 'x', 'z', 'j'};
    vector<char> F{'J', 'P', 'S', 'V', 'B', 'X', 'Z', 'J'};

    // Input até EOF
    while (cin >> c)
    {
        // Se caractere for aceitável, mudá-lo para f
        for (int i = 0; i < 8; i++)
        {
            is_f = false;

            if (c == f[i])
            {
                c = 'f';
                is_f = true;
            }
            else if (c == F[i])
            {
                c = 'F';
                is_f = true;
            }
        }


        if (is_f)
        {
            if (f_before)
                continue;
            else
            {
                cout << c;
                f_before = true;
            }
            
        }

        else
        {
            cout << c;
            f_before = false;
        }
    }

    cout << endl;
    return 0;
}