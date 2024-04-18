#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin>>b[j];
        }
        int c=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0;  j <m;  j++)
            {
                if (a[i]+b[j]<=k)
                {
                    c++;
                }
                
            }
            
        }
        cout<<c<<endl;
        
        
    }

    return 0;
}
