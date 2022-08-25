#include <iostream>

using namespace std;

int main()
{
    // Declarar i e j
    float i=0, j=0;

    do
    {
        for (int k = 0; k < 3; k++)
        {
            j++;

            cout << "I="
                 << i
                 << " "
                 << "J="
                 << j
                 << endl;
        }

        i += 0.2;
        j -= 2.8;
    }
    while (i < 2.1);
}