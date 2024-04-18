#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int ans = 0;
    int start_pos = 'a';

    for (int i = 0; i < s.length(); i++)
    {
        int x = abs(start_pos - s[i]);
        int y = 26 - x;
        // int p = (x < y) ? x : y;
        ans += y;
         start_pos = s[i];
    }
    cout << ans << endl;

    return 0;
}
