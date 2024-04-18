#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        int ans = x;

        while (n--)
        {
            ans = max(ans / 2 + 10, 1); // Apply potion effect
        }

        while (m--)
        {
            ans -= 10; // Apply spell effect
        }

        if (ans <= 0)
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
