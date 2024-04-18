#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        int *max = max_element(a, a + 3);
        if (a[0] == a[1] && a[1] == a[2])
        {
            cout << 1 << " " << 1 << " " << 1 << endl;
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                if (a[i] == *max)
                {
                    cout << 0 << " ";
                }
                else if(a[i]!=*max)
                {
                    cout << (*max - a[i]) + 1 << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}