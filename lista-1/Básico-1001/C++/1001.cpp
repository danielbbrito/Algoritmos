#include <iostream>

int main()
{
    // Declarar variáveis A e B
    int A, B;

    // Input para A e B
    std::cin >> A
             >> B;
    
    // Realizar soma
    int X = A + B;

    // Imprimir
    std::cout << "X = "
              << X
              << std::endl;

    return 0;
}