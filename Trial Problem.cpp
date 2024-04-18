#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(vector<int> &a)
{
    int n = a.size();
    for (int i = 2; i < n; i++)
    {
        if (a[i - 2] != a[i])
        {
            return false;
        }
    }
    return true;
}

int minRemove(vector<int> &a)
{
    int n = a.size();
    if (n == 1)
    {
        return -1;
    }
    if (n == 2)
    {
        return (a[0] == a[1]) ? -1 : 1;
    }
    int ans = n;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        vector<int> b;
        bool allSame = true;
        for (int i = 0; i < n; i++)
        {
            if (!(mask & (1 << i)))
            {
                b.push_back(a[i]);
                if (b.size() > 1 && a[i] != b[0])
                {
                    allSame = false;
                }
            }
        }
        if (b.size() >= 3 && !allSame && !isBeautiful(b))
        {
            ans = min(ans, (int)n - (int)b.size());
        }
    }
    return (ans == n) ? -1 : ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << minRemove(a) << endl;
    }
    return 0;
}