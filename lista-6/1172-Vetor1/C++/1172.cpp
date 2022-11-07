#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i;
    vector<int> X;

    for (int n = 0; n < 10; n++)
    {
        cin >> i;

        if (i <= 0)
            X.push_back(1);

        else
            X.push_back(i);

        cout << "X[" << n << "] = " << X.at(n) << endl;
    }

    return 0;
}
