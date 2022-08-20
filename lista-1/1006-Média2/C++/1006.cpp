#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A;
    double B;
    double C;
    cin >> A >> B >> C;

    double med = (A * 2 + B * 3 + C * 5) / 10;
    cout << "MEDIA = " << fixed << setprecision(1) << med << endl;

    return 0;
}