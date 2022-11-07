#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, next;
    vector<int> N;

    cin >> n;

    N.push_back(n);
    cout << "N[0] = "<< N.at(0) << endl;

    for (int i = 1; i < 10; i++)
    {
        next = N.at(i - 1) * 2;
        N.push_back(next);
        cout << "N[" << i << "] = " << next << endl;
    }

    return 0;
}