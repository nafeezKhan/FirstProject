#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        int c = 0, x = 0;

        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'P')
            {
                continue;
            }
            else
            {
                for (int j = i + 1; j < k; j++)
                {
                    if (s[j] == 'P')
                    {
                        c++;
                    }
                    else
                    {
                        if (c >= x)
                        {
                            x = c;
                            c = 0;
                        }
                        else
                        {
                            c = 0;
                        }
                    }
                    int y = j + 1;
                    if (s[j] == 'P' && y == k)
                    {
                        if (c >= x)
                        {
                            x = c;
                        }
                    }
                }
                 break;
            }
           
        }
        cout<<x<<endl;
    }
    return 0;
}
