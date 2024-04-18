#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    //int c = 0;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        int c1 = 1, c2 = 1;
        while (w % 2 == 0)//Condition check:w%2==0(True)->inside loop
        {
            w = w / 2;
            c1 *= 2;
        }
        while (h % 2 == 0)//Condition check:h%2==0(True)->inside loop
        {
            h = h / 2;
            c2 *= 2;
        }
        int c = c1 * c2;
        if (c >= n)
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
