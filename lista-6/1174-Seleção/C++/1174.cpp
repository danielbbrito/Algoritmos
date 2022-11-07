#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    // Declarar variáveis
    float n;
    vector<float> A;

    for (int i = 0; i < 100; i++)
    {
        cin >> n;
        A.push_back(n);

        if (A.at(i) <= 10)
            cout << fixed << setprecision(1) << "A[" << i << "] = " << A.back() << endl;
    }

    return 0;
}