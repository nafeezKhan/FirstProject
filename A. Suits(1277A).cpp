#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if (f>e)
    {
        int s2 =min({b, c, d});
        d-=s2;
        int s1 =  min(d, a);  
        int ans = (s1 * e) + (s2 * f);
        cout << ans << endl;
    }
    else
    {
         int s1 =  min(d, a);  
          d-=s1;
         int s2 =min({b, c, d});
         int ans = (s1 * e) + (s2 * f);
         cout << ans << endl;
    }
    

    return 0;
}
