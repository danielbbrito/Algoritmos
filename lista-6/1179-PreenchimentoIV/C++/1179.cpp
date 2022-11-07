#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    int x;
    vector<int> par;
    vector<int>impar;

    // Ler valores e guardá-los nos respectivos vetores
    for (int i = 0; i < 15; i++)
    {
        cin >> x;

        if (x % 2 == 0)
        {
            par.push_back(x);

            if (par.size() == 5)
            {
                for (int j = 0; j < par.size(); j++)
                {
                    cout << "par[" << j << "] = " << par.at(j) << "\n";
                }

                par.clear();
                par.shrink_to_fit();
            }
        }

        else
        {
            impar.push_back(x);

            if (impar.size() == 5)
            {
                for (int j = 0; j < impar.size(); j++)
                {
                    cout << "impar[" << j << "] = " << impar.at(j) << "\n";
                }

                impar.clear();
                impar.shrink_to_fit();
            }
        }
    }

    for (int j = 0; j < impar.size(); j++)
    {
        cout << "impar[" << j << "] = " << impar.at(j) << "\n";
    }

    for (int k = 0; k < par.size(); k++)
    {
        cout << "par[" << k << "] = " << par.at(k) << "\n";
    }

    return 0; 
}