#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i] < 0)
        {
            sum = sum + abs(a[i]);
        }
    }
    cout << sum << endl;

    return 0;
}
