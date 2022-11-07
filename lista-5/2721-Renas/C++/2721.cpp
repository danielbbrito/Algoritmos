#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    int a, total=0;
    vector<string> renas = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", 
    "Donner", "Blitzen", "Rudolph"};

    // Ler 9 valores, somando-os ao total
    for (int i = 0; i < 9; i++)
    {
        cin >> a;
        total += a;
    }

    int pos = total % renas.size();

    if (pos != 0)
    {
        cout << renas.at(pos - 1)
             << endl;
    }
    else
    {
        cout << renas.at(8)
             << endl;
    }

    return 0;
}