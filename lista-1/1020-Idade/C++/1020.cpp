#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int anos = N / 365;
    N -= anos * 365; 

    int meses = N / 30;
    N -= meses * 30;

    int dias = N;

    cout << anos
         << " ano(s)\n"
         << meses
         << " mes(es)\n"
         << dias
         << " dia(s)"
         << endl;
    
    return 0;

}