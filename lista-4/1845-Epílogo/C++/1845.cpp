#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    vector<string> texto;
    string txt;

    // Loop while cin para pegar o input
    while (!cin.eof())
    {
        getline(cin, txt);

        for (int i = 0; i < txt.length(); i++)
        {
            if (txt[i - 1] == 'f' || txt[i - 1] == 'F' || txt[i + 1] == 'f' || txt[i + 1] == 'F')
            {
                txt.erase(i, 1);
            }
            else if (txt[i] == 'j' || txt[i] == 'p' || txt[i] == 's' || txt[i] == 'v' ||
                txt[i] == 'b' || txt[i] == 'x' || txt[i] == 'z' )
            {
                txt[i] = 'f';
            }
            else if (txt[i] == 'J' || txt[i] == 'P' || txt[i] == 'S' || txt[i] == 'V' ||
                     txt[i] == 'B' || txt[i] == 'X' || txt[i] == 'Z')
            {
                txt[i] = 'F';
            }
        }
        texto.push_back(txt);
        //cout << txt << "\n";
    }
    cout << "\n";
    for (auto itr = texto.begin(); itr != texto.end(); itr++)
    {
        cout << *itr << "\n";
    }
    cout << flush;

    return 0;
}