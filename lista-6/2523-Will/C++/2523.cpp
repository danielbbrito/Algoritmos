#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    char alf;
    vector<char> alfabeto;
    int n, letra;

    while (cin >> alf)
    {
        alfabeto.push_back(alf);

        for (int i = 0; i < 25; i++)
        {
            cin >> alf;
            alfabeto.push_back(alf);
        }

        cin >> n;

        for (int j = 0; j < n; j++)
        {
            cin >> letra;

            cout << alfabeto.at(letra - 1);
        }

        cout << "\n";
        alfabeto.clear();
    }

    return 0;
}