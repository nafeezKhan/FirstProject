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
        int n, x;
        cin >> n >> x;

        if (n == 1 || n == 2)
        {
            cout << 1 << endl;
        }
        else
        {
           
            int f= ceil((double)(n - 2) / x);
            cout << f + 1 << endl;
        }
    }

    return 0;
}
