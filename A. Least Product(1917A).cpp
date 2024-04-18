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
        int p = 0;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                c++;
            }
            if (a[i] == 0)
            {
                p=1;
            }
        }
        if (c%2!=0 || p==1)
        {
             cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
           
        }
    }

    return 0;
}
