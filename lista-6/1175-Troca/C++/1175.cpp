#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, aux;

    vector<int> N;

    for (int i = 0; i < 20; i++)
    {
        cin >> n;
        N.push_back(n);
    }

    for (int j = 0; j < N.size(); j++)
    {
        cout << "N[" << j << "] = "  << N.at(N.size() - 1 - j) << endl;
    }
    return 0;
}
