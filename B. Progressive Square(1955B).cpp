#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> v(n*n);
        for (int i = 0; i < n*n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a.push_back(v[0] + i * c + j * d);
            }
        }
        sort(a.begin(), a.end());
        if (a == v)
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
