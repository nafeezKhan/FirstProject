#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> s[i][j];
            }
        }
        int sum = 0, c = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (s[i][j] == 'X')
                {
                    sum += min({i, j, 9 - i, 9 - j});
                    c++;
                }
            }
        }
        int ans = sum + c;
        cout << ans << endl;
    }

    return 0;
}
