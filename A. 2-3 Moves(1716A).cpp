#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0, c = 0;
        if (n % 2 != 0)
        {
            if (n < 3)
            {
                ans = 2;
            }
            else
            {
                ans = ceil(double(n) / 3);
            }
        }
        else
        {
            if (n % 3 == 0)
            {
                ans = n / 3;
            }
            else
            {
                ans = ceil(double(n) / 3);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
