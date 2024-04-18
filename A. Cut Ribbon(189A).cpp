#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int arr[3] = {a, b, c};
    int dp[4][n+1];
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == 0)
            {
                dp[i][j] = 0;
            }
            else if (i == 0)
            {
                dp[i][j] = -1e9; // Updated to a very large negative value
            }
            else if (arr[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - arr[i - 1]] + 1);
            }
        }
    }
    cout << dp[3][n] << endl;

    return 0;
}
