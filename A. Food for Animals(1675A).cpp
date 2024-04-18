#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,x,y;
        cin >> a>>b>>c>>x>>y;
        int p=max(0,x-a);
        int q=max(0,y-b);
         cout << (c >= (p + q) ? "YES" : "NO") << endl;
    }

    return 0;
}
