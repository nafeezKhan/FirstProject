#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 1; i < (n / 2); i++)
        {
            sum1 += pow(2, i);
        }
        sum1 += pow(2, n);
        for (int i = (n / 2); i < n; i++)
        {
            sum2 += pow(2, i);
        }
        int ans = abs(sum1 - sum2);
        cout << ans << endl;
    }

    return 0;
}
