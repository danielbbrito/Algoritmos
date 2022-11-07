#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    char lp;
    vector<char> LP;

    // Ler string
    for (int i = 0; i < 1000; i++)
    {
        cin >> noskipws >> lp;
        LP.push_back(lp);
    }

    for (int j = 1; j < LP.size(); j++)
    {
        if (LP[j - 1] != 'p')
        {
            cout << LP[j];
        }
    }
    
    cout << endl;

    return 0;
}