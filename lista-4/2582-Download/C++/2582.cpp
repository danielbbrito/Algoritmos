#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Declarar variáveis
    int c, x, y;

    // Criar vetor
    std::vector<std::string> musicas {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", 
    "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", 
    "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};

    // Input 1
    std::cin >> c;

    for (int i = 0; i < c; i++)
    {
        // Input 2
        std::cin >> x
                 >> y;

        std::cout << musicas[x + y]
                  << "\n";
    }

    std::cout << std::flush;
    return 0;
}
