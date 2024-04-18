#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='B')
            {
                 c++;
                 i+=k-1;              
            }
            else
            {
                continue;
            }
                        
        }
        cout << c << endl;
    }

    return 0;
}
