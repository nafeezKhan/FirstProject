#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int max_val=max({a,b,c});
        int n = (abs(a - b)) * 2;
        int x = c + (abs(a - b));
        int y= c-(abs(a-b));
        if (n<max_val)
        {
            cout << -1 << endl;
        }
        else
        {
            if (x>n)
            {
                cout<<y<<endl;
            }
            else
            {
                cout<<x<<endl;
            }
            
            
        }
    }

    return 0;
}
