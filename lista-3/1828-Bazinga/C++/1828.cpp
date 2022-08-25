#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declarar variáveis
    int N;
    string sheldon, raj;

    do
    {
        cin >> N;
    }
    while (N >= 100);

    for (int i = 1; i <= N; i++)
    {
        cin >> sheldon
            >> raj;

        // Se sheldon == raj
        if (sheldon == raj)
        {
            cout << "Caso #"
                 << i
                 << ": De novo!\n";
        }

        // Se sheldon tesoura e raj papel
        if (sheldon == "tesoura" && raj == "papel")
        {
            cout << "Caso #"
                 << i
                 << ": Bazinga!\n";
        }
        else if (sheldon == "papel" && raj == "tesoura")
        {
            cout << "Caso #"
                 << i
                 << ": Raj trapaceou!\n";
        }

        // Se sheldon papel e raj pedra
        if (sheldon == "papel" && raj == "pedra")
        {
            cout << "Caso #"
                 << i
                 << ": Bazinga!\n";
        }
        else if (sheldon == "pedra" && raj == "papel")
        {
            cout << "Caso #"
                 << i
                 << ": Raj trapaceou!\n";
        }

        if (sheldon == "pedra" && raj == "lagarto")
        {
            cout << "Caso #"
                 << i
                 << ": Bazinga!\n";
        }
        else if (sheldon == "lagarto" && raj == "pedra")
        {
            cout << "Caso #"
                 << i
                 << ": Raj trapaceou!\n";
        }

        // Se sheldon lagarto e raj Spock
        if (sheldon == "lagarto" && raj == "Spock")
        {
            cout << "Caso #"
                 << i
                 << ": Bazinga!\n";
        }
        else if (sheldon ==  "Spock" && raj == "lagarto")
        {
            cout << "Caso #"
                 << i
                 << ": Raj trapaceou!\n";
        }

        // Se sheldon Spock e raj tesoura
        if (sheldon == "Spock" && raj == "tesoura")
        {
            cout << "Caso #"
                 << i
                 << ": Bazinga!\n";
        }
        else if (sheldon == "tesoura" && raj == "Spock")
        {
            cout << "Caso #"
                 << i
                 << ": Raj trapaceou!\n";
        }

        // Se sheldon tesoura e raj lagarto
        if (sheldon == "tesoura" && raj == "lagarto")
        {
            cout << "Caso #"
                 << i
                 << ": Bazinga!\n";
        }
        else if (sheldon == "lagarto" && raj == "tesoura")
        {
            cout << "Caso #"
                 << i
                 << ": Raj trapaceou!\n";
        }

        // Se sheldon lagarto e raj papel
        if (sheldon == "lagarto" && raj == "papel")
        {
            cout << "Caso #"
                 << i
                 << ": Bazinga!\n";
        }
        else if (sheldon == "papel" && raj == "lagarto")
        {
            cout << "Caso #"
                 << i
                 << ": Raj trapaceou!\n";
        }

        // Se sheldon papel e raj Spock
        if (sheldon == "papel" && raj == "Spock")
        {
            cout << "Caso #"
                 << i
                 << ": Bazinga!\n";
        }
        else if (sheldon == "Spock" && raj == "papel")
        {
            cout << "Caso #"
                 << i
                 << ": Raj trapaceou!\n";
        }

        // Se sheldon Spock e raj pedra
        if (sheldon == "Spock" && raj == "pedra")
        {
            cout << "Caso #"
                 << i
                 << ": Bazinga!\n";
        }
        else if (sheldon == "pedra" && raj == "Spock")
        {
            cout << "Caso #"
                 << i
                 << ": Raj trapaceou!\n";
        }

        // Se sheldon pedra e raj tesoura
        if (sheldon == "pedra" && raj == "tesoura")
        {
            cout << "Caso #"
                 << i
                 << ": Bazinga!\n";
        }
        else if (sheldon == "tesoura" && raj == "pedra")
        {
            cout << "Caso #"
                 << i
                 << ": Raj trapaceou!\n";
        }
    }

    cout << flush;

    return 0;
}
