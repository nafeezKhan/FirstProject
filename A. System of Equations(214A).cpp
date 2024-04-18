#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    int c = 0;
    for ( a = 0; a*a <= n; a++)
    {
        b = n-a*a ;
        if (a * a + b == n && a+b*b==m)
        {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}