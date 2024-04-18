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
        cin >> n;
        int a[n];
        int c = 0;
        int x, y;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if (a[i] == 1)
            {
                x=i;
                break;
            }
        }
        for (int i = x+1; i < n; i++)
        {
            if (a[i]==1)
            {
                 y=i;
            }
            
            
            
        }
        for (int i = x; i <= y; i++)
        {
            if (a[i]==0)
            {
                c++;
            }
            
        }
        if (y>x)
            {
                cout<<c<<endl;
            }
        else
        {
            cout << 0 << endl;
        }
        
        
        
    }

    return 0;
}
