#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        cin.ignore();
        string s;
            for (int i = 0; i < n; i++)
            {
                char ch='a'+(i%b);
                s+=ch;
            }
            cout<<s<<endl;
    }

    return 0;
}
