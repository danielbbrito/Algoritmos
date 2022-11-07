#include <iostream>
#include <string>
#include <numeric>

using namespace std;

int main()
{
    // Declarar variáveis
    int x, y, z;
    
    // Ler até EOF
    while (cin >> x >> y >> z)
    {
        if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y)
        {
            if (gcd(x, y) == 1 && gcd(x, z) == 1 && gcd(y, z) == 1)
                cout << "tripla pitagorica primitiva\n";
            else
                cout << "tripla pitagorica\n";
        }
        
        else
            cout << "tripla\n";
    }

    return 0;

}