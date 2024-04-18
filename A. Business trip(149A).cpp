#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int k;
    cin >> k;
    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12);
    int GotIt=0;
    if (k == 0)
    {
        cout << 0;
    }
    else
    {
        int ans = 0, c = 0;
        for (int i = 11; i >= 0; i--)
        {
            ans += a[i];
            c++;
            if (ans >= k)
            {
                cout << c;
                GotIt=1;
                break;
            }
            
        }
         if (GotIt!=1)
        {
            cout<< -1;
        }
        
    }

    return 0;
}
