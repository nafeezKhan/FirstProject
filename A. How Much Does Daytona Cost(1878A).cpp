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
        int a[n];
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == k)
            {
                c++;
            }
        }
        if (c > 0)
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
