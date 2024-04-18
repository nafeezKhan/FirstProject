#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int f = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'i' && s[i + 1] == 't')
            {
                f = 1;
                break;
            }
        }
        if (f==1)
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
