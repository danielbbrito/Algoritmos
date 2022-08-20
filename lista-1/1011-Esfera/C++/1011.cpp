#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double pi = 3.14159;
    double raio;
    cin >> raio;

    double volume = (4 / 3.0) * pi * pow(raio, 3);
    cout << "VOLUME = "
         << fixed
         << setprecision(3)
         << volume
         << endl;
    
    return 0;
}