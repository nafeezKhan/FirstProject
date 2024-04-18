#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_set<string> p;
        for (int i = 0; i < n - 1; i++)
        {
            string x = s.substr(i, 2);
            p.insert(x);
        }
        cout << p.size() << endl;
    }

    return 0;
}
