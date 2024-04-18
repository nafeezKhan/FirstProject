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
        int c1=0,c0=0;
        for (char c : s)
        {
           if (c=='0')
           {
             c0++;
           }
            else
            {
                c1++;
            }
            
        }
         int x=min(c1,c0);
         if (x%2!=0)
         {
            cout<<"DA"<<endl;
         }
         else
         {
            cout<<"NET"<<endl;
         }
         
               
    }
    
    return 0;
}
