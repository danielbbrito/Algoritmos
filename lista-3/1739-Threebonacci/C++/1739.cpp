#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis necessárias
    int n; 
    long int num1=1, num2=2, num3;
    vector<long int> three;

    // Entrada até EOF
    while (cin >> n)
    {
        if (n < 1 || n > 60)
        {
            continue;;
        }
        three.reserve(n);

        while (three.size() != n)
        {
            num3 = num1 + num2;

            if (num3 % 3 == 0)
            {
                three.push_back(num3);
            }
            else if (to_string(num3).find("3", 0) != string::npos)
            {
                three.push_back(num3);
            }

            num1 = num2;
            num2 = num3;
        }
    
        cout << three.at(n - 1)
             << endl;
        
        three.clear();
        
    }
    // Enquanto tamanho de vector for menor ou igual a n
    // Realizar sequencia de fibonacci, começando com 1
    // Imprimir valor n do vetor
}