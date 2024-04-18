#include <bits/stdc++.h>
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
        char X = s[0];
        vector<char> vec;
        vec.push_back(X);
        for (int i = 1; i < n; i++)
        {
            if (s[i] == X)
            {
                if (i == n - 1)
                {
                    break;
                }
                else
                {
                    X = s[i + 1];
                    vec.push_back(X);
                    i++;
                }
            }
        }
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i];
        }
        cout << endl;
    }

    return 0;
}
