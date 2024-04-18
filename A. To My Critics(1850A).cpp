#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int s[3], i;
        for (i = 0; i < 3; i++)
        {
            cin >> s[i];
        }

        sort(s, s + 3);
        if (s[1] + s[2] >= 10)
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
