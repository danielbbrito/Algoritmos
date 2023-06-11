/**
 * @file 1534.cpp
 * @author NoneCoding
 * @brief 
 * @version 0.1
 * @date 2022-12-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    // Declarar variável m
    int m;

    // Ler m até EOF
    while (cin >> m)
    {
        // Contruir matriz
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j == m - i - 1)
                    cout << 2;
                
                else if (j == i)
                    cout << 1;
                
                else
                    cout << 3;
            }

            cout << "\n";
        }
    }

    return 0;
}