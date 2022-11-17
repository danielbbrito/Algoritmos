#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int bin_dec(string n);
string bin_hex(string n);
string dec_hex(string n);
string dec_bin(string n);
int hex_dec(string n);
string hex_bin(string n);

int main()
{
    // Declarar variáveis
    int n, dec=0;
    string base, num, hex;

    // Ler n
    cin >> n;

    // Para cada caso de teste
    for (int i = 0; i < n; i++)
    {
        cin >> num >> base;
        cout << "Case " << i + 1 << ":\n";

        if (base == "bin")
        {
            // Realizar conversão para entrada binária
            cout << bin_dec(num) << " dec\n"
                 << bin_hex(num) << " hex\n";
        }
        
        else if (base == "dec")
        {
            cout << dec_hex(num) << " hex\n" << dec_bin(num) << " bin\n";
        }

        else if (base == "hex")
        {
            cout << hex_dec(num) << " dec\n" << hex_bin(num) << " hex\n";
        }
    }

    return 0;
}


int bin_dec(string n)
{
    int decimal = 0;
    // Converter binário para decimal
    for (int j = 0; j < n.length(); j++)
    {
        decimal += (int)(n[n.length() - j - 1] - 48) * pow(2, j);
    }

    return decimal;
}

string bin_hex(string n)
{
    return dec_hex(to_string(bin_dec(n)));
}

string dec_hex(string n)
{
    int n_int = stoi(n);
    int aux;
    string hex;
    string final;

    int i = 0;
    while (n_int % 16 > 0)
    {
        aux = n_int % 16;
        n_int /= 16;
        switch (aux)
        {
        case 10:
            hex += "A";
            break;

        case 11:
            hex += "B";
            break;

        case 12:
            hex += "C";
            break;

        case 13:
            hex += "D";
            break;

        case 14:
            hex += "E";
            break;

        case 15:
            hex += "F";

        default:
            hex += to_string(aux);
        }
    }
    // Inverter string
    for (int i = 0; i < hex.length(); i++)
    {
        final += hex[hex.length() - i - 1];
    }
    return final;
}

string dec_bin(string n)
{
    int n_int = stoi(n);
    int aux;
    string bin;
    string final;

    int i = 0;
    while (n_int > 0)
    {
        aux = n_int % 2;
        n_int /= 2;
        bin += aux;
    }
    // Inverter string
    for (int i = 0; i < bin.length(); i++)
    {
        final += bin[bin.length() - i - 1];
    }
    return final;
}

int hex_dec(string n)
{
    int dec = 0;

    for (int i = 0; i < n.length(); i++)
    {
        dec += (int)(n[n.length() - i - 1] - 48) * pow(16, i);
    }

    return dec;
}

string hex_bin(string n)
{
    return dec_bin(to_string(hex_dec(n)));
}
