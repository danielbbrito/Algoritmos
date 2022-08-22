#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declarar variáveis de notas
    float n1, n2, n3, n4;

    // Input 1
    cin >> n1
        >> n2
        >> n3
        >> n4;

    // Declarar variável exame
    float exame;

    // Input 2
    cin >> exame;

    // Calcular média1
    float media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;

    // Verificar condicionais 1
    if (media >= 7)
    {
        cout << "Media: "
             << fixed
             << setprecision(1)
             << media
             << "\nAluno aprovado."
             << endl;
        
        return 0;
    }

    else if (media < 5)
    {
        cout << "Media: "
             << fixed
             << setprecision(1)
             << media
             << "\nAluno reprovado."
             << endl;

        return 0;
    }

    // Se em exame, imprimir
    cout << "Media: "
         << fixed
         << setprecision(1)
         << media
         << "\nAluno em exame.\n";

    // Imprimir nota do exame
    cout << "Nota do exame: "
         << fixed
         << setprecision(1)
         << exame;

    // Calcular média final
    float media_final = (media + exame) / 2;

    // Verificar condiçionais 1
    if (media_final >= 5)
    {
        cout << "\nAluno aprovado."
             << "\nMedia final: "
             << fixed
             << setprecision(1)
             << media_final
             << endl;
    }
    else if (media_final < 5)
    {
        cout << "\nAluno reprovado."
             << "\nMedia final: "
             << fixed
             << setprecision(1)
             << media_final
             << endl;
    }

    return 0;
}
