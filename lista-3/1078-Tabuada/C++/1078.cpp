#include <iostream>

using namespace std;

int main()
{
    // Declarar variável
    int N;

    // Input
    cin >> N;

    // For loop de 1 até 10
    for (int i = 1; i <= 10; i++)
    {
        // Calcular de tabuada de N
        cout << i 
             << " x "
             << N
             << " = "
             << i * N
             << endl;
    }
    
    return 0;
}
