#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        int x;
        x = (1440) - (h * 60 + m);
        cout << x << endl;
    }

    return 0;
}
