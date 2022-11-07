#include <iostream>

int main()
{
    // Declarar variáveis
    int n, amax, amin, altura;

    while (std::cin >> n >> amin >> amax)
    {
        int visitantes = 0;
        
        // Loop de i até n
        for (int i = 0; i < n; i++)
        {
            // Input 2
            std::cin >> altura;

            // Se altura entre amin e amax, adicionar a visitantes
            if (amin <= altura && altura <= amax)
            {
                visitantes++;
            }
        }

        std::cout << visitantes
                  << std::endl;
    }
    
    return 0;
}