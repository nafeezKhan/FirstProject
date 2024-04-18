#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string c = "codeforces";
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if (c[i] != s[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
