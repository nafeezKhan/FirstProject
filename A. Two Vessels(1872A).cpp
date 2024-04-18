#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x = min(a, b);
        int y = max(a, b);
        int count = 0;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if ((c > x && c > y))
        {
            cout << 1 << endl;
        }

        else
        {
            while (y >= x)
            {
                  if (x >= y)
                  {
                      break;
                  } 
                x += c;
                y -= c;
                count++;
            }
            cout << count << endl;
        }
    }

    return 0;
}
