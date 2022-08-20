#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string nome;
    double sal;
    double vendas;
    cin >> nome
        >> sal
        >> vendas;

    double total = sal + vendas * 0.15;
    cout << "TOTAL = R$ "
         << fixed
         << setprecision(2) 
         << total 
         << endl;
    
    return 0;
}