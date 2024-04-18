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
        vector<int> strength(n);
        for (int i = 0; i < n; i++)
        {
            cin >> strength[i];
        }
        auto max_val1 = max_element(strength.begin(), strength.end());
        int max_pos = max_val1 - strength.begin();
        strength.erase(max_val1);
        auto max_val2 = max_element(strength.begin(), strength.end());
        strength.insert(strength.begin() + (max_pos - 1), *max_val1);
        for (int i = 0; i < n; i++)
        {
            if (i == max_pos - 1)
            {
                cout << *max_val1 - *max_val2 << " ";
            }
            else
            {
                cout << strength[i] - *max_val1 << " ";
            }
        }
        cout<<endl;
    }

    return 0;
}
