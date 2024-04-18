#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int t;
    cin >> t;
    while (t--)
    {
         long long int n, k;
        cin >> n >> k;

         long int diagonal = (4 * n) - 2;
        if (k % 2 != 0)
        {
            long long int x=(ceil(double(k) / 2));
            cout << x << endl;
        }
        else
        {
            if (k == diagonal)
            {
                long long int x=(k / 2) + 1;
                cout << x << endl;
            }
            else
            {
                 long long int x=(k / 2);
                cout << x << endl;
            }
        }
    }

    return 0;
}
