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
        int a, b;
        int max = 0, x;
        for (int i = 1; i <= n; i++)
        {
            cin >> a >> b;
            if (a <= 10)
            {
                if (b > max)
                {
                    max = b;
                    x = i;
                }
            }
        }
        cout << x << endl;
    }

    return 0;
}
