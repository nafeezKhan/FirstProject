#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c = 0;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            if (a > b)
            {
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}
