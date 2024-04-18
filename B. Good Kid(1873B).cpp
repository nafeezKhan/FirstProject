#include <iostream>
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
        int x = 1;
        for (int i = 0; i < n ; i++)
        {
            a[0] = a[0] + 1;
            x *=a[i];
        }
        cout << x << endl;
    }

    return 0;
}
