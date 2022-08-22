#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declarar variáveis
    string vertebra, tipo, alimentacao;

    // Input
    cin >> vertebra;
    cin >> tipo;
    cin >> alimentacao;

    // Verificar vertebra
    if (vertebra == "vertebrado")
    {   
        // Verificar tipo
        if (tipo == "ave")
        {
            // Verificar alimentação
            if (alimentacao == "carnivoro")
            {
                cout << "aguia"
                     << endl;
                return 0;
            }

            else if (alimentacao == "onivoro")
            {
                cout << "pomba"
                     << endl;
                return 0;
            }
        }

        // Verificar tipo 2
        else if (tipo == "mamifero")
        {
            // Verificar alimentação 2
            if (alimentacao == "onivoro")
            {
                cout << "homem"
                     << endl;
                return 0;
            }

            else if (alimentacao == "herbivoro")
            {
                cout << "vaca"
                     << endl;
                return 0;
            }

        }
    }

    // Verificar vertebra 2
    else if (vertebra == "invertebrado")
    {
        // Verificar tipo 3
        if (tipo == "inseto")
        {
            // Verificar alimentação 3
            if (alimentacao == "hematofago")
            {
                cout << "pulga"
                     << endl;
                return 0;
            }

            else if (alimentacao == "herbivoro")
            {
                cout << "lagarta"
                     << endl;
                return 0;
            }
        }

        // Verificar tipo 4
        else if (tipo == "anelideo")
        {
            // Verificar alimentação 4
            if (alimentacao == "hematofago")
            {
                cout << "sanguessuga"
                     << endl;
                return 0;
            }

            else if (alimentacao == "onivoro")
            {
                cout << "minhoca"
                     << endl;
                return 0;
            }
        }
    }

    return 0;
}
