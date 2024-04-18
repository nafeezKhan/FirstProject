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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int balanced = 0;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                balanced++;
            }
            else if (s[i] == ')')
            {
                balanced--;
            }
            if (balanced == -1)
            {
                c++;
                balanced = 0;
            }
        }
        cout << c << endl;
    }

    return 0;
}
