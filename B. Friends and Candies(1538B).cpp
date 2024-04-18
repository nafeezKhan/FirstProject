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
        int a[n];
        int sum = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % n != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int x = sum / n;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > x)
                {
                    c++;
                }
            }
            cout << c << endl;
        }
    }

    return 0;
}
