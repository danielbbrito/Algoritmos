#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int N, in = 0, out = 0;
    int X;

    // Input 1
    cin >> N;

    // Loop
    for (int i = 0; i < N; i++)
    {
        cin >> X;
        if (10 <= X && X <=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }

    cout << in
         << " in\n"
         << out
         << " out"
         << endl;

    return 0;
}
