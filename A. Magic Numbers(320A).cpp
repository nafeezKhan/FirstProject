#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string num;
    cin >> num;
    int magic = 1;
    for (int i = 0; i < num.length();)
    {
        if (num.substr(i, 3) == "144")
        {
            i += 3; 
        }
        else if (num.substr(i, 2) == "14")
        {
            i += 2; 
        }
        else if (num[i] == '1')
        {
            i++; 
        }
        else
        {
            magic = 0;
            break;
        }
    }
    if (magic == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
