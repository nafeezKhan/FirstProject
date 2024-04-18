#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = 0;
        if (a == 0)
        {
            cout << 1 << endl;
        }
        else if (a == 0 && b == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            sum = a + (b * 2) + 1;
            cout << sum << endl;
        }
    }

    return 0;
}
