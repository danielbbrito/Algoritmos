#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Declarar variável
    int qt;

    // Ler valor
    cin >> qt;

    // Loop
    for (int vez = 0; vez < qt; vez++)
    {
        // Declarar vetores participantes
        string part1, paridade1, part2, paridade2;

        // Declarar variáveis v1 e v2
        int v1, v2;

        // Ler valores para nome e paridade dos vetores
        cin >> part1
            >> paridade1
            >> part2
            >> paridade2;
        
        cin >> v1
            >> v2;
        
        if ((v1 + v2) % 2 == 0)
        {
            if (paridade1 == "PAR")
            {
                cout << part1 << endl;
            }
            else if (paridade2 == "PAR")
            {
                cout << part2 << endl;
            }
        }
        else
        {
            if (paridade1 == "IMPAR")
            {
                cout << part1 << endl;
            }
            else if (paridade2 == "IMPAR")
            {
                cout << part2 << endl;
            }
        }
    }

    return 0;
}