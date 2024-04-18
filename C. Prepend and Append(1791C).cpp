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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0, j = n - 1;
        int x = n;
        while (i < j && a[i] != a[j])
        {
            x = x - 2;
            i++;
            j--;
        }
        cout << x << endl;
    }

    return 0;
}
