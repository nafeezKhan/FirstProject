#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c0 = 0, c1 = 0;
    for (char c : s)
    {
        if (c == '0')
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }
    int ans = abs(c0 - c1);
    cout << ans << endl;

    return 0;
}
