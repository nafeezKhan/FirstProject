#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; m * i <= n; i++)
    {
        n++;
    }
    cout << n << endl;

    return 0;
}
