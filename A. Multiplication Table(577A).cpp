#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n >> x;
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 && x / i <= n)
        {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}
