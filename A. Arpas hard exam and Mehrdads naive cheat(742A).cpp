#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
   int n;
   cin>>n;
   int base=1378;
   int ans=1;
   if (n==0)
   {
     cout<<1<<endl;
   }
   else
   {
    while (n>0)
    {
        if (n%2!=0)
        {
            ans=(ans*base)%10;
        }
        base=(base*base)%10;
        n=n/2;
        
    }
    cout<<ans<<endl;
    
   }
   
   
   return 0;
   
}
