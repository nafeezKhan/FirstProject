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
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int x=i+j;
                if (x%2==0)
                {
                    cout<<"##";
                }
                else
                {
                    cout<<"..";
                }

            }   
               cout<<endl;
            for (int k = 1; k <=n; k++)
               {
                   int y=i+k;
                   if (y%2==0)
                   {
                       cout<<"##";
                   }
                   else
                   {
                      cout<<"..";
                   }
                   
               }
               cout<<endl;
                
        }
    }

    return 0;
}
