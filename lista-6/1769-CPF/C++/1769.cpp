#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main()
{
    // Declarar variáveis
    int soma1, soma2;
    string aux;
    vector<int> cpf;

    // Repetir mil vezes
    while (cin >> aux)
    {
        soma1 = 0;
        soma2 = 0;

        for (int j = 0; j < 14; j++)
        {
            if (isdigit(aux[j]))
                cpf.push_back((int)(aux[j] - 48));
        }

        for (int k = 0; k < 9; k++)
        {
            soma1 += cpf[k] * (k + 1);
            soma2 += cpf[k] * (9 - k);
            //cout << soma1 << " " << soma2 << endl;
        }

        soma1 = soma1 % 11;
        soma2 = soma2 % 11;

        if (soma1 == 10)
            soma1 = 0;
        if (soma2 == 10)
            soma2 = 0;
        
        if (soma1 == cpf[9] && soma2 == cpf[10])
            cout << "CPF valido\n";
        else
            cout << "CPF invalido\n";

        cpf.clear();
        cpf.shrink_to_fit();
    }

    return 0;
}