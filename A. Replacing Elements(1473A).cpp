#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n];
        for (int i = 0; i <n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if (a[n-1]<=d)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if (a[0]+a[1]>d)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
            
            
        }
        
        
    }
    
    return 0;
}
