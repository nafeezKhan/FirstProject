#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        for (int i = 0; i <3; i++)
        {
            cin>>a[i];
        }
        if (2*a[1]==a[0]+a[2] || a[2]== 2*a[1]-a[0] || a[0]==2*a[1]-a[2] )
        {
             cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
               

    }

    return 0;
}
