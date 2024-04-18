#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
      long long int p = 1;
        for (int i = 0; i < n; i++)
        {
            p = p * b[i];
        }
        if (2023 % p != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
             long long int x=2023;
            for (int i = 1; i <= k; i++)
            {
                int ans=x/p;
                cout << ans << " ";
                p = ans;
                x = ans;
            }
            cout << endl;
        }
    }

    return 0;
}
