#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> data(3);
    string aux;

    for (int i = 0; i < 2; i++)
    {
        getline(cin, aux, '/');

        data.emplace(data.begin() + i, aux);
    }

    getline(cin, data[2]);

    // Converter para o primeiro formato
    cout << data[1]
         << '/'
         << data[0]
         << '/'
         << data[2]
         << "\n";
    
    // Converter para o segundo formato
    cout << data[2]
         << '/'
         << data[1]
         << '/'
         << data[0]
         << "\n";
    
    // Converter para o terceiro formato
    cout << data[0]
         << '-'
         << data[1]
         << '-'
         << data[2]
         << endl;

    return 0;
}