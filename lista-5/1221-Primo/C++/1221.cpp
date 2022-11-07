#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    // Declarar variáveis
    unsigned int n, x, p;
    string primo;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x == 2 || x == 3)
        {
            primo = "Prime";
        }
        else if (x % 2 == 0 || x % 3 == 0)
        {
            primo = "Not Prime";
        }
        else
        {
            primo = "Prime";

            for (int k = 1; (6 * k) + 1 <= sqrt(x); k++)
            {
                if (x % ((6 * k) + 1) == 0)
                {
                    primo = "Not Prime";
                    break;
                }
            }



            for (int k = 1; (6 * k) - 1 <= sqrt(x); k++)
            {
                if (x % ((6 * k) - 1) == 0)
                {
                    primo = "Not Prime";
                    break;
                }
            }
        }

        cout << primo
             << "\n";
    }

    cout << flush;
    return 0;
    }