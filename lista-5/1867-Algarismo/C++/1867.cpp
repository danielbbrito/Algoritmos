#include <iostream>
#include <string>

using namespace std;

#define str(x) to_string(x);

string convert(string &n);

int main()
{
    // Declarar variáveis
    string n, m;

    // Ler n e m
    cin >> n >> m;
    while (n != "0" && m != "0")
    {
        // Converter n e m
        convert(n);
        convert(m);

        if (n > m)
            cout << 1 << endl;
        else if (m > n)
            cout << 2 << endl;
        else
            cout << 0 << endl;

        cin >> n >> m;
    }

}

string convert(string &n)
{
    // Converter n para string

    while (n.length() != 1)
    {
        int soma = 0;
        for (int i = 0; i < n.length(); i++)
            soma += (int)(n[i] - 48);

        n = str(soma);
    }

    return n;
}