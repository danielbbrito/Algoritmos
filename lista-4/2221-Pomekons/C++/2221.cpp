#include <iostream>

using namespace std;

int main()
{
    // Declarar variáveis
    int t, b, ai,di, li, dabriel, guarte;

    // Ler valor para t
    cin >> t;

    // Repetição até t
    for (int i = 0; i < t; i++)
    {
        // Ler b
        cin >> b;

        // Ler atreibutos 1
        cin >> ai
            >> di
            >> li;
        
        dabriel = (ai + di) / 2;

        if (li % 2 == 0)
        {
            dabriel += b;
        }

        cin >> ai
            >> di
            >> li;
        
        guarte = (ai + di) / 2;

        if (li % 2 == 0)
        {
            guarte += b;
        }

        if (dabriel > guarte)
        {
            cout << "Dabriel\n";
        }
        else if (dabriel < guarte)
        {
            cout << "Guarte\n";
        }
        else
        {
            cout << "Empate\n";
        }
    }

    cout << flush;
    
    return 0;
}
