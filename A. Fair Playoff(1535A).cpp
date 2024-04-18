#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q, x, y;
        cin >> p >> q >> x >> y;
        int max1 = (p > q) ? p : q;
        int min1 = (p < q) ? p : q;
        int max2 = (x > y) ? x : y;
        int min2 = (x < y) ? x : y;
        if (max1 > min2 && max2 > min1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
