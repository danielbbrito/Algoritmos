#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declarar variáveis
    int alunos;
    float nota, maior_nota;
    string escolhido = "Minimum note not reached", matricula;

    // Input 1
    do
    {
        cin >> alunos;
    }
    while (nota < 0 || nota > 1000000);

    // Loop de 0 até nota
    for (int i = 0; i < alunos; i++)
    {
        // Input 2
        cin >> matricula
            >> nota;

        if (nota >= 8 && nota > maior_nota)
        {
            maior_nota = nota;
            escolhido = matricula;
        }
    }

    cout << escolhido
         << endl;

    return 0;
}