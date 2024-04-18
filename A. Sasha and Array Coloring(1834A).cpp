#include <bits/stdc++.h>
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int cost = 0;
            for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--)
            {
                if (i>j)
                {
                    break;
                }
                
                cost += (max(a[i], a[j]) - min(a[i], a[j]));
            }
        cout << cost << endl;
    }

    return 0;
}
