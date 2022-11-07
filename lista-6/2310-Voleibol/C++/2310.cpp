#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
 
int main()
{
    // Declarar variáveis
    int s=0, b=0, a=0, s1=0, b1=0, a1=0, sa, ba, aa, s1a, b1a, a1a, n;
    string nome;

    // Ler valor de n
    cin >> n;

    // Repetir para todos os jogadores
    for (int i = 0; i < n; i++)
    {
        // Ler nome
        cin >> nome;

        // Ler S, B e A e S1, B1 e A1
        cin >> sa >> ba >> aa >> s1a >> b1a >> a1a;

        s += sa;
        b += ba;
        a += aa;
        s1 += s1a;
        b1 += b1a;
        a1 += a1a;
    }

    cout << fixed << setprecision(2) << "Pontos de Saque: " << (s1 / (float)s) * 100<< " %.\n"
         << "Pontos de Bloqueio: " << (b1 / (float)b) * 100 << " %.\n"
         << "Pontos de Ataque: " << (a1 / (float)a) * 100 << " %." << endl;

    return 0;
}