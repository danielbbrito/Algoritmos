#include <iostream>
#include <cstdlib>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    int soma1=0, soma2=0;
    string cpf;

    for (int i = 0; i < 10000; i++)
    {
        getline(cin, cpf);

        for (int i = 0, j = 1; i < 11; i++)
        {
            if (isdigit(cpf[i]))
                soma1 += (int)(cpf[i] - 48) * j;

            if (isdigit(cpf[10-i]))
            {
                soma2 += (int)(cpf[10 - i] - 48) * j;
                j++;
            }

            else
                continue;
        }

        soma1 = soma1 % 11;
        soma2 = soma2 % 11;

        if (soma1 == 10)
            soma1 = 0;

        if (soma2 == 10)
            soma2 = 0;
        
        if (soma1 == (int)(cpf[12] - 48) && soma2 == (int)(cpf[13] - 48))
            cout << "CPF valido\n";
        else
            cout << "CPF invalido\n";
        
        soma1 = 0;
        soma2 = 0;
    }

    return 0;
}