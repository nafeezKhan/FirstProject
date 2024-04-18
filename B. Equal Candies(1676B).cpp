#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for ( i = 0; i < n; i++)
        {
            cin>>a[i];            
        }
        sort(a,a+n);
        int c=0, sum=0;
        for ( i = 0; i <n-1; i++)
        {
            if (a[i]==a[i+1])
            {
              c++;
            }
            
        }
        
        if (n==1 || c==n-1)
        {
            cout<<0<<endl;
        }
        else
        {
            for ( i = 1; i <n; i++)
            {
                int x= abs(a[0]-a[i]);
                sum=sum+x;
            }
            cout<<sum<<endl;
            
        }
        
        

    }

    return 0;
}
