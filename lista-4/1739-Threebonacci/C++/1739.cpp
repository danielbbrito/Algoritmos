#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Declarar variáveis
    int n;
    unsigned long long n1=1, n2=1, n3;
    vector<unsigned long long> three;

    // Ler os 60 primeiros valores de threebonacci
    while (three.size() != 60)
    {
        n3 = n1 + n2;

        if (to_string(n3).find('3') != -1 || n3 % 3 == 0)
        {
            three.push_back(n3);
        }

        n1 = n2;
        n2 = n3;
    }

    // Imprimir valor n
    while (!cin.eof())
    {
        cin >> n;
        if (n > 0 && n <= 60)
        {
            cout << three.at(n - 1) << "\n";
        }
    }

    cout << flush;

    return 0;
}