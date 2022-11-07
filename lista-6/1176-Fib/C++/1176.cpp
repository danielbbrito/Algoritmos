#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n;
    vector<unsigned long long> fib {0, 1};

    cin >> t;

    for (int i = 0; i <= 59; i++)
    {
        fib.push_back(fib[0 + i] + fib[1 + i]);
    }

    for (int j = 0; j < t; j++)
    {
        cin >> n;

        cout << "Fib(" << n << ") = " << fib.at(n) << endl;
    }

    return 0; 
}