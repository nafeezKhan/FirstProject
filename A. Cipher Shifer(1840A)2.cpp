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
        string s;
        cin >> s;
        string x;
        x+=s[0];
        char c=s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] == c)
            {
                if (i == n - 1)
                {
                    break;
                }
                else
                {
                    x += s[i + 1];
                    c=s[i+1];
                    i++;
                }
            }
        }

        cout <<x<<endl;
    }

    return 0;
}
