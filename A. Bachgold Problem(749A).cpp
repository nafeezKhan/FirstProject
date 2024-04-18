#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        int k = n / 2;
        cout << k << endl;
        for (int i = 1; i <= k; i++)
        {
            cout << 2<<" ";
        }
    }
    else
    {
        int k = (n - 3) / 2;
        cout << k + 1 << endl;
        for (int i = 1; i <= k; i++)
        {
            cout <<2<<" ";
        }
        cout <<3<< endl;
    }

    return 0;
}
