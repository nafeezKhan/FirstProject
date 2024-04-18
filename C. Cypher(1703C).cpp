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
        for (int i = 0; i < n; i++)
        {
            int x;
            string s;
            cin >> x >> ws >> s;//By using ws, you ensure that any leading whitespace
            for (char ch : s)
            {
                if (ch == 'U')
                {
                    a[i] = a[i] - 1;
                    if (a[i] == -1)
                    {
                        a[i] = 9;
                    }
                }
                else
                {
                    a[i] = a[i] + 1;
                    if (a[i] == 10)
                    {
                        a[i] = 0;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
