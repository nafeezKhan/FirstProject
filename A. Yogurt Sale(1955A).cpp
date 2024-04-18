#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int x, y;
        int ans = 0;
        x = (n / 2) * b + (n % 2) * a;
        y = n * a;
        ans = min(x, y);

        cout << ans << endl;
    }

    return 0;
}
