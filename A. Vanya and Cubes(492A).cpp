#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum1 = 0,sum2=0, c = 0;
    for (int i = 1; i <= n; i++)
    {
        sum1 = sum1 + i;
        sum2=sum2+sum1;
        c++;
        if (sum2 > n)
        {
            c = c - 1;
            break;
        }
    }
    cout << c << endl;

    return 0;
}
