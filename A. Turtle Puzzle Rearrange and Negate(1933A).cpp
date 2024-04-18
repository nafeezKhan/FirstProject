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
        int a[n];
        int c=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i]<0)
            {
                c++;
            }
            
        }
        sort(a, a + n);
        int r;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 0)
            {
                r = i;
                break;
            }
        }
        int sum1 = 0, sum2 = 0,ans=0;
        if (c==n)
        {
            for (int i = 0; i < n; i++)
        {
            ans += abs(a[i]);
        }
        cout<<ans<<endl;
        }
        
        else
        {
            for (int i = 0; i < r; i++)
        {
            sum1 += abs(a[i]);
        }
        for (int i = r; i < n; i++)
        {
            sum2+=a[i];
        }
        ans=sum1+sum2;
        cout<<ans<<endl;
        }
        
    }

    return 0;
}
