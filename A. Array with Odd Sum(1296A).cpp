#include <iostream>
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
        int sum = 0;
        int cE = 0, cO = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (a[i] % 2 == 0)
            {
                cE++;
            }
            else
            {
                cO++;
            }
        }
        if ((sum % 2 != 0) || cE<n && cO<n)
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
