#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned long long int t;//unsigned long long int to ensure proper casting of the result. 
    cin >> t;
    while (t--)
    {
        unsigned long long int n, k;
        cin >> n >> k;

        unsigned long long int diagonal = (4ULL * n) - 2ULL;
        if (k % 2 != 0)
        {
            cout << static_cast<unsigned long long int>(ceil(double(k) / 2)) << endl;
        }
        else
        {
            if (k == diagonal)
            {
                cout << (k / 2) + 1ULL << endl;
            }
            else
            {
                cout << k / 2ULL << endl;
            }
        }
    }

    return 0;
}
