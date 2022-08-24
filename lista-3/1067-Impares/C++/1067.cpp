#include <iostream>

using namespace std;

int main()
{
    // Declarar variável
    int X;

    // Input
    do
    cin >> X;
    while (X < 1 || X > 1000);

    // Loop
    for (int i = 1; i <= X; i++)
    {
        if (i % 2 != 0)
        {
            cout << i
                 << "\n";
        }
    }

    return 0;
}
