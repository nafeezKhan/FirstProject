#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);
    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        int c = 0;
        for (int i = l - 1; i < r - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}
