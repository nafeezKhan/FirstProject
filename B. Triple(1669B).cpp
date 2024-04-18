#include <iostream>
#include <algorithm>
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
        sort(a, a + n);
        int c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                c++;
                int x = a[i];
                if (c == 2)
                {
                    cout << x << endl;
                    break;
                }
            }
            else
            {
                c = 0;
            }
        }
        if (c!=2)
        {
            cout<< -1<<endl;
        }
        
    }

    return 0;
}
