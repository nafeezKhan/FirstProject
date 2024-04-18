#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[2];
    while (n--)
    {
        for (int i = 0; i < 2; i++)
        {
            cin >> a[i];
        }
        if (a[0] < a[1])
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;

    return 0;
}
