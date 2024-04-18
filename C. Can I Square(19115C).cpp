#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, sum = 0, n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            sum = sum + a;
        }
        double root_sum = sqrt(sum);
        if (root_sum == (int)root_sum)
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
