#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // char a[2][n];
        string s1, s2;
        cin >> s1 >> s2;
        int same = 1;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                if ((s1[i] == 'G' && s2[i] == 'B') || (s1[i] == 'B' && s2[i] == 'G'))
                {
                    continue;
                }
                else
                {
                    same = 0;
                    break;
                }
            }
        }
        if (same == 1)
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
