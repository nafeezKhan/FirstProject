#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    int pos = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (s[pos] == t[i])
        {
            pos++;
        }
        else
        {
            continue;
        }
        
    }

    cout << pos+1<< endl;

    return 0;
}
