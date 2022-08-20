#include <iostream>

using namespace std;

int main() {
    // Declarar variáveis
    int A, B, C;

    // Input
    cin >> A
        >> B
        >> C;

    // Calcular o maior entre A e B
    const int num1 = (A + B + abs(A - B)) / 2;

    // Calcular o maior entre o anterior e C
    const int num2 = (num1 + C + abs(num1 - C)) / 2;

    // Output
    cout << num2
         << " eh o maior"
         << endl;
    
    return 0;
}