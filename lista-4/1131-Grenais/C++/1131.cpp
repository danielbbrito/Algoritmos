#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis, incializando aquelas que terão valor atualizado
    int gremio, vitoria_gremio=0, inter, vitoria_inter=0, 
    simnao, grenais=1, empates=0;

    // Repetir infinitamente
    while (true)
    {
        // Ler valores para inter e gremio
        cin >> inter
            >> gremio;

        // Determinar quem ganhou o grenal
        if (inter > gremio)
        {
            vitoria_inter++;
        }
        else if (gremio > inter)
        {
            vitoria_gremio++;
        }
        else
        {
            empates++;
        }

        // Imprimir novo grenal e Ler valor para novo grenal ou não
        cout << "Novo grenal (1-sim 2-nao)\n"; 
        cin >> simnao;

        // Verificar se novo grenal deve ser adicionado
        if (simnao == 1)
        {
            grenais++;
            continue;
        }
        else
        {
            break;
        }
    }

    cout << grenais
         << " grenais\n"
         << "Inter:"
         << vitoria_inter
         << "\nGremio:"
         << vitoria_gremio
         << "\nEmpates:"
         << empates
         << "\n";

    if (vitoria_inter > vitoria_gremio)
    {
        cout << "Inter venceu mais"
             << endl;
    }
    else if (vitoria_gremio > vitoria_inter)
    {
        cout << "Gremio venceu mais"
             << endl;
    }
    else
    {
        cout << "Nao houve vencedor"
             << endl;
    }

    return 0;
}
