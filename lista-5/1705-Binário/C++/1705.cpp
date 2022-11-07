#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    Declarar variáveis
    Ler inteiro
    Calcular múltiplos do inteiro
    Se o inteiro em formato de string for formado apenas por 0 e 1
    Imprimir número e sair da repetição
    */

   long num, mult;

    for (int i = 0; i < 200000; i++)
    {
        cin >> num;

        int contador = 1;

        while (true)
        {
            mult = num * contador;

            string mult_str = to_string(mult);
            int aux = 1;
            
            for (int j = 0; j < mult_str.length(); j++)
            {

                if (mult_str[j] != '1' || mult_str[j] != '0')
                {
                    aux = 0;
                    break;
                }
            }
            cout << aux;
            if (aux == 0)
            {
                continue;
            }

            cout << mult << endl;
            contador++;
            break;
        }
    }

    return 0;
}