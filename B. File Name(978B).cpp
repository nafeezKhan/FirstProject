#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = s.length();
    int c = 0;
    int xc = 0;
    string motherfucker = "xxx";
    for (char ch : s)
    {
        if (ch == 'x')
        {
            xc++;
        }
    }
    if (xc == x)
    {
        cout << (n - 2) << endl;
    }

    else
    {
        int ans = 0;
        for (int i = 0; i < x - 2; i++)
        {
            if (s.substr(i, i + 3) == motherfucker)
            {
                c++;
            }
        }
        ans = (x + c) - x;
        cout << ans << endl;
    }

    return 0;
}
