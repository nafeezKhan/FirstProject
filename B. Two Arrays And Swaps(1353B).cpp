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
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }

        sort(a, a + n);
        sort(b, b + n);
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            if (b[n -i-1] > a[i])
            {
                a[i]=b[n-i-1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        cout << sum << endl;
    }

    return 0;
}
