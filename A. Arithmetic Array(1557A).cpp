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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum == n)
        {
            cout << 0 << endl;
        }
        else if (sum <= 0)
        {
            cout << 1 << endl;
        }
        
        else if (sum>n)
        {
            int x=sum-n;
            cout<<x<<endl;
        }
        else 
        {
             cout << 1 << endl;
        }
        
        
    }

    return 0;
}
