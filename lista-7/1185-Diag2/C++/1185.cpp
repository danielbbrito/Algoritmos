#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char o;
    float m[12][12], soma=0;

    cin >> o;

    // Popular matriz
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }

    for (int l = 0; l < 12; l++)
    {
        for (int c = 10 - l; c >= 0; c--)
        {
            soma += m[l][c];
        }
    }

    if (o == 'S')
        cout << fixed << setprecision(1) << soma << endl;

    else
        cout << fixed << setprecision(1) << soma / 66.0 << endl;
    
    return 0;
}