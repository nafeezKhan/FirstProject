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
        int a, b;
        char ps='+';
        cin >> a>>ps >> b;
 
        cout << a + b << endl;
    }

    return 0;
}
