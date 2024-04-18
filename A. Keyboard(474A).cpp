#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char direction;
    cin >> direction;
    string s;
    cin >> s;
    int x = 0;
    if (direction == 'R')
    {
        x = -1;
    }
    else
    {
        x = 1;
    }
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s1.length(); j++)
        {
            if (s1[j] == s[i])
            {
                s[i] =s1[j+x];
                break;
            }
        }
    }
    cout<<s<<endl;

    return 0;
}
