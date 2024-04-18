#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int x, y;
        if (m % 2 == 0)
        {
            x = m / 2;
            y = m / 2;
        }
        if (m % 2 != 0)
        {
            x = m / 2;
            y = (m / 2) + 1;
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n == 2)
        {
            cout << m << endl;
        }
        else if (n == 3)
        {
            for (int i = 0; i < n; i++)
            {
                if (i == 0)
                {
                    a[i] = x;
                }
                if (i == 2)
                {
                    a[i] = y;
                }
                else
                {
                    a[i] = 0;
                }
            }
        }

        else if (n > 3)
        {
            for (int i = 0; i < n; i++)
            {
                if (i == 1)
                {
                    a[i] = x;
                }
                if (i == 3)
                {
                    a[i] = y;
                }
                else
                {
                    a[i] = 0;
                }
            }
        }
        int value = 0;
        for (int i = 0; i < n - 1; i++)
        {
            value += abs(a[i] - a[i + 1]);
        }
        cout << value << endl;
    }

    return 0;
}
