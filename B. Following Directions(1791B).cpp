#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int x = 0, y = 0;
        int GotIt = 0;

        for (int i = 0; i < n; i++)
        {
            char s;
            cin >> s;
            if (s == 'R')
            {
                x++;
            }
            else if (s == 'L')
            {
                x--;
            }
            else if (s == 'U')
            {
                y++;
            }
            else if (s == 'D')
            {
                y--;
            }

            if (x == 1 && y == 1)
            {
                GotIt = 1;
                // break;
            }
        }

        if (GotIt == 1)
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
