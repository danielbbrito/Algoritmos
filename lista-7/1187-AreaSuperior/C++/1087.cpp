#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char o;
    double m[12][12], soma=0;

    cin >> o;

    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> m[i][j];
    
    for (int l = 0; l < 5; l++)
        for (int c = l + 1; c < 11 - l; c++)
            soma += m[l][c];


    if (o == 'S')
        cout << fixed << setprecision(1) << soma << endl;

    else
        cout << fixed << setprecision(1) << soma / 30.0 << endl;

    return 0;
}