#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '5')
        {
            s[i] = '9' - (s[i] - '0') + '0';
        }
    }
    cout << s << endl;

    return 0;
}
