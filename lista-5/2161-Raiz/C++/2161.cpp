#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Delcarar variáveis
    int n;
    double raiz = 3, base = 1 / 6;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        base += 6;

        base = 1 / base;
    }

    cout << fixed << setprecision(10) << raiz + base << endl;

    return 0;
}