#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int i = 1;
        vector<int> vec;

        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                vec.push_back(digit * i);
            }
            n /= 10;
            i *= 10;
        }

        cout << vec.size() << endl;
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
