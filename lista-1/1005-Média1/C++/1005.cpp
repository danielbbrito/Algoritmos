#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A;
    double B;
    cin >> A >> B;

    double med = ((A * 3.5) + (B * 7.5)) / 11;
    // Use fixed to get the desired precision, otherwise it will round
    cout << "MEDIA = " << fixed << setprecision(5) << med << endl;

    return 0;
}