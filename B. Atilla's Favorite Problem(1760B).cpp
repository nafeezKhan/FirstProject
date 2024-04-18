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
        cin.ignore(); // Clear the newline character from the input buffer
        string s;
        getline(cin, s);
        sort(s.begin(), s.end());
        int x = 'z' - s[n - 1];
        int ans = 26 - x;
        cout << ans << endl;
    }

    return 0;
}
