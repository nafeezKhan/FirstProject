#include <iostream>
#include <vector>
#include <cmath>
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
        vector<int> v;
        int i = 0, j = n - 1;
        while (i < j)
        {
            v.push_back(a[i]);
            v.push_back(a[j]);
            i++;
            j--;
        }
        int x = ceil(n / 2);
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " " << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " " << endl;
            }
            cout << v[x - 1] << endl;
        }
    }

    return 0;
}
