#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int missingElement1, missingElement2;

    for (i = 0; i < n - 1; i++)
    {
        int b;
        cin >> b;
        if (a[i] != b)
        {
            missingElement1 = a[i];
            break;
        }
    }

    for (i = 0; i < n - 2; i++)
    {
        int c;
        cin >> c;
        if (a[i] != c)
        {
            missingElement2 = a[i];
            break;
        }
    }

    // Output the missing elements
    cout << missingElement1 << endl;
    cout << missingElement2 << endl;

    return 0;
}
