#include <iostream>
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
        int a[n];
        int x=0,c=0;
        for (int i = 0; i <n; i++)
        {
            cin>>a[i];
            
        }
        for (int i = 0; i <n; i++)
        {
            if (a[i]==0)
            {
                c++;
            }
            if (a[i]==1)
            {
                c=0;
                continue;
            }
            
           x=max(c,x);
            
        }
        cout<<x<<endl;

        
    }

    return 0;
}
