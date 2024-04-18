#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int c = 0;
    for (int i = 0, j = 0; i < n && j < n; i++, j++)
    {
        if (abs(s1[i] - s2[j]) > 5)
        {
            c += 10 - abs(s1[i] - s2[j]);
        }
        else
        {
            c += abs(s1[i] - s2[j]);
        }
    }
    cout << c << endl;

    return 0;
}
