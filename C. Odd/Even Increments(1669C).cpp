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
        int a[n];
        int x = 1, y = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n-2; i=i+2)
        {
            if (a[i]%2!=a[i+2]%2)
            {
                x=0;
            }
           
        }
        for (int i = 1; i < n-2; i=i+2)
        {
            if (a[i]%2!=a[i+2]%2)
            {
                y=0;
            }
           
        }
        if (n==2)
        {
            cout << "YES" << endl;
        }
        else if (x==1 && y==1)
        {
            cout << "YES" << endl;
        }
        
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
