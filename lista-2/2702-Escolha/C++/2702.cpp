#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis para os pratos disponíveis
    int ca, ba, pa;

    // Input 1
    cin >> ca 
        >> ba 
        >> pa;

    // Declarar variáveis para pedidos
    int cr, br, pr;

    // Input 2
    cin >> cr
        >> br
        >> pr;

    // Declarar variáveis dos que não serão atendidos e inicializá-las em 0
    int c_nao = 0;
    int b_nao = 0;
    int p_nao = 0;

    // Verificar se os pedidos c serão atendidos
    if (cr > ca)
    {
        c_nao = cr - ca;
    }

    // Verificar se os pedidos b serão atendidos
    if (br > ba)
    {
        b_nao = br - ba;
    }

    // Verificar se os pedidos p serão atendidos
    if (pr > pa)
    {
        p_nao = pr - pa;
    }

    // Declarar e inicializar variável para número de pessoas que não serão atendidas
    int nao_atendidas = c_nao + b_nao + p_nao;

    // Output
    cout << nao_atendidas
         << endl;

    return 0;
}
