#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int int_val=stoi(s);
        int ans=0;
        if (n==1)
        {

         ans= int_val-1;
            
        }
        else if (n==2)
        {
         ans= int_val-10;
        }
         else if (n==3)
        {
        
             ans= int_val-100;
         }
          else if (n==4)
        {
        
             ans= int_val-1000;
        }
          else if (n==5)
        {
        
             ans= int_val-10000;
        }
          else if (n==6)
        {
        
             ans= int_val-100000;
        }
           else if (n==7)
        {
        
             ans= int_val-1000000;
        }
          else if (n==8)
        {
        
             ans= int_val-10000000;
        }
          else if (n==9)
        {
        
             ans= int_val-100000000;
        }
        cout<<ans<<endl;

    }
    
    return 0;
}
