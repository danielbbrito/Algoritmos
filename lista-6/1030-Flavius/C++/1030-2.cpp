#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    // Declarar variaveis
    vector<unsigned short> pessoas;
    unsigned short nc, n, k, index=0;


    cin >> nc;

    for (unsigned short i = 0; i < nc; i++)
    {
        cin >> n >> k;
        k--;

        // Popular vetor
        for (unsigned short j = 1; j <= n; j++)
        {
            pessoas.push_back(j);
        }

        while (pessoas.size() > 1)
        {
            index = (index + k) % pessoas.size();

            pessoas.erase(pessoas.begin() + index);
        }

        cout << "Case " << i + 1 << ": " << pessoas.at(0) << "\n"; 
    }
    
    return 0;
}