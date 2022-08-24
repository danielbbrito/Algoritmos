#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis
    float s = 0;

    for (int i = 0; i < 100; i++)
    {
        s += 1.0 / (i + 1);
    }

    cout << fixed
         << setprecision(2)
         << s
         << endl;

    return 0;
}