#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int oh_yeah = 360 / (180 - a);
        if (360 % (180 - a) == 0 && oh_yeah >= 3)
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
