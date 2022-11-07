#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variáveis
    int n, num, bin=0, hex=0, dec=0;
    string tipo;
    vector<string> conv;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num >> tipo;

       if (tipo == "dec")
       {
        // Decimal para binário, divisões sucessivas
        string bin;
        int aux = num / (num / 2) ;

        while ()


       }
    }
}