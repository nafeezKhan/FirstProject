#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] >= a[i + 1])
            {
                c++;
            }
        }
        if (c == 0)
        {
            cout << "YES" << endl;
        }
        else if (n == 1)
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
