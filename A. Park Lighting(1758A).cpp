#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m % 2 == 0)
        {
            int ans = n * (m / 2);
            cout << ans << endl;
        }
        else if (n == 1 && m == 1)
        {
            cout << 1 << endl;
        }

        else
        {
            int ans = (n * ((m - 1) / 2)) + ceil(double(n) / 2);
            cout << ans << endl;
        }
    }

    return 0;
}
