#include <cstdio>
#include <string>

int main()
{
    // Declarar variáveis
    int i = 0, n;
    unsigned long long n1=1, n2=1, n3=0, three[60];

    // Iterar sobre sequencia de fibonacci, até que three tenha tamanho 60
    while (i != 60)
    {
        // Calcular valor de n3
        n3 = n1 + n2;

        // Verificar se n3 atende aos requisitos de threebonacci
        if (n3 % 3 == 0 || std::to_string(n3).find('3') != std::string::npos)
        {
            three[i] = n3;
            i++;
        }

        // Atualizar os valores de n1, n2
        n1 = n2;
        n2 = n3;
    }

    while (scanf("%i", &n) != EOF)
    {
        if (n > 0 && n <= 60)
        {
            printf("%lld\n", three[n - 1]);
        }
    }
}