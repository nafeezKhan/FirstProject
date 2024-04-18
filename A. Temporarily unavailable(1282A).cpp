#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c, r;
        cin >> a >> b >> c >> r;

        if (a > b)
            swap(a, b);

        long long int covered_distance = max(min(b, c + r) - max(a, c - r), 0LL);
        //0LL is a way to represent the integer literal 0 as a long long type.
        long long int total_distance = b - a;

        cout << total_distance - covered_distance << endl;
    }

    return 0;
}
