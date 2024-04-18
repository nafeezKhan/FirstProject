#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        long long int a, b;
        cin >> a >> b;
        int ans;
         if ((2 * a) < b)
        {
            ans = x * (2 * a);
        }
        if (x > y)
        {
            swap(x, y);
            ans = (x*b) +(a * (y - x));
        }
         else if (x<y)
        {
          ans=  (x*b)+ (a * (y - x));
        }
       
        else if (x == y)
        {
            ans = x * (b);
        }
       
        

        cout << ans << endl;
    }

    return 0;
}
