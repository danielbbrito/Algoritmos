#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    float n1, n2;
    
    while (true)
    {
        while (true)
        {
            cin >> n1;

            if (n1 > 10.0 || n1 < 0)
            {
                cout << "nota invalida\n";
                continue;
            }
            else
            {
                break;
            }
        }

        while (true)
        {
            cin >> n2;

            if (n2 > 10.0 || n2 < 0)
            {
                cout << "nota invalida\n";
                continue;
            }
            else
            {
                break;
            }
        }

        cout << "media = "
             << fixed
             << setprecision(2)
             << (n1 + n2) / 2
             << "\n";

        do
        {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> x;
        }
        while (x < 1 || x > 2);

        if (x == 2)
        {
            break;
        } 
    }
    cout << flush;

    return 0;
}