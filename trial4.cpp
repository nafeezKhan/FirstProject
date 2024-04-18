#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, r;
        cin >> a >> b >> c >> r;
        int x = max(a, b);
        int y = min(a, b);
        int i = c + r;
        int j = c - r;
        int ans = 0;
        if (a == b || (r >= a && r >= b))
        {
            cout << 0 << endl;
        }
        else if (r==0)
        {
            cout<<x-y<<endl;
        }
        
        else
        {
            if (j > y && i < x)
            {
                ans = (x - y) - (i - j);
            }
            else if (j > y && i > x)
            {
                ans = j - y;
            }
            else if ((i < y && i < x) && (j < y && j < x) )
            {
                ans = x - y;
            }
            else if ((i==y&& j==y) || (i==x && j==x) )
            {
                ans= x-y;
            }
            else if ((j<y && j<x) && (i>y && i<x))
            {
                ans=x-i;
            }
            
            cout<<ans<<endl;
            
            
        }
    }
    return 0;
}
