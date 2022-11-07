#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    double x;
    vector<double> N;

    // Ler valor x
    cin >> x;

    N.push_back(x);

    // Preencheer vetor
    for (int i = 0; i < 99; i++)
    {
        N.push_back(N.at(i) / 2);
    }

    // Imprimir vetor
    for (int j = 0; j < N.size(); j++)
    {
        cout << fixed << setprecision(4) << "N[" << j << "] = " << N.at(j) << "\n";
    }

    return 0;
}