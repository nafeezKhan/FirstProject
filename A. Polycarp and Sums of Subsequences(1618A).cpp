#include <bits/stdc++.h>
using ll=long long;
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
       int a[7];
       for (int i = 0; i <7; i++)
       {
         cin>>a[i];
       }
       int x=a[0]+a[1];
       int y;
       if (x==a[2] && x==a[3])
       {
         y=a[2];
       }
       else
       {
        if (x==a[2])
        {
            y=a[3];
        }
        else if (x==a[3])
        {
            y=a[2];
        }        
        
       }
       cout<<a[0]<<" "<<a[1]<<" "<<y<<endl;
       
       

       

    }
       

    return 0;
}
