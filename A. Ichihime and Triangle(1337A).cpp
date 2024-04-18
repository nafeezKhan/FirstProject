#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && b == c)
        {
            cout << a << " " << b << " " << c << endl;
        }
        else if (a == b && c == d && b != c)
        {
            cout << a << " " << c << " " << d << endl;
        }
        else if (a == b && b == c && c == d)
        {
            cout << a << " " << b << " " << c << endl;
        }
        else if (a != b && b == c && c == d)
        {
            cout << b << " " << c << " " << d << endl;
        }
        else if (a != b && b != c && c != d)
        {
            cout << b << " " << c << " " << c << endl;
        }
        else if (a != b && b == c && c != d)
        {
            cout<<b<<" "<<b<<" "<<b<<endl;
        }
    }

    return 0;
}
