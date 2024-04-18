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
        int n, a;
        cin >> n;
        int c1 = 0, c2 = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if (a == 1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }

        if (n%2==0 && c1%2==0 && c2%2==0)
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
