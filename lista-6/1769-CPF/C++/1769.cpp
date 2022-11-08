#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    int soma1=0, soma2=0;
    string CPF;
    

    for (int j = 0; j < 10000; j++)
    {
        // Ler cpf
        cin >> CPF;

        for (int i = 0, j = 1, k = 1; i < 11; i++)
        {
            if (isdigit(CPF[i]))
            {
                soma1 += ((int)(CPF[i] - 48) * j);
                soma2 += (int)(CPF[i] - 48) * (9 - j + 1);
                j++;
            }
        }

        soma1 = soma1 % 11;
        soma2 = soma2 % 11;

        if (soma1 == 10)
            soma1 = 0;
        
        if (soma2 == 10)
            soma2 = 0;

        if (soma1 == (int)(CPF[12] - 48) && soma2 == (int)(CPF[13] - 48))
            cout << "CPF valido\n";
        
        else
            cout << "CPF invalido\n";

        soma1 = 0;
        soma2 = 0;
    }
    

    return 0;
}