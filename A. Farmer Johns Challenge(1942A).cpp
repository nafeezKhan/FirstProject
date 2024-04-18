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
        if (n == k)
        {
            for (int i = 0; i < n; i++)
            {
                cout << 69 << " ";
            }
            cout << endl;
        }
        else
        {
            if (k >= 2)
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
