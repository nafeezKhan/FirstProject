#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pi = "3141592653589793238462643383279";
        string s;
        cin >> s;
        int c = 0;
        if (s[0] != '3')
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {

                if (s[i] == pi[i])
                {
                    c++;
                }
                else if (s[i] != pi[i])
                {
                    break;
                }
            }
            cout << c << endl;
        }
    }

    return 0;
}