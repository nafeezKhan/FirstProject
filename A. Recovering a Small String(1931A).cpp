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
        string s = "Aabcdefghijklmnopqrstuvwxyz";
        string lexi;
        if (n <= 28)
        {
            lexi += "aa";
            lexi += s[n - 2];
        }
        else if (n <= 53)
        {
            lexi += 'a';
            lexi += s[n - (27)];
            lexi += 'z';
        }
        else
        {
            lexi += s[n - 52];
            lexi += "zz";
        }
        cout << lexi << endl;
    }

    return 0;
}
