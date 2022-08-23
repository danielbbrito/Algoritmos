#include <iostream>

using namespace std;

int main()
{
    // Declarar variável N
    int N;

    // Input, verificando o range
    do
    {
        cin >> N;
    }
    while (N < 0 && N > 10);

    // Verificar escopo da nota
    if (N == 0)
    {
        cout << "E"
             << endl;
    }

    else if (0 < N && N <= 35)
    {
        cout << "D"
             << endl;
    }

    else if (35 < N && N <= 60)
    {
        cout << "C"
             << endl;
    }

    else if (60 < N && N <= 85)
    {
        cout << "B"
             << endl;
    }

    else if (85 < N && N <= 100)
    {
        cout << "A"
             << endl;
    }

    return 0;
}
