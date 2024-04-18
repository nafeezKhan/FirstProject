#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    cin.ignore();
    string s2;
    getline(cin,s2);//getline reads the entire line until it encounters a newline character.
 //use cin >> s2;, it reads input from the standard input until it encounters whitespace (space, tab, newline, etc.)
    vector<char> characters;
    for (char ch : s2)
    {
        if (ch != ' ')
        {
            characters.push_back(ch);
        }
    }
    int c = 0;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < characters.size(); j++)
        {
            if (s[i] == characters[j])
            {
                c++;
            }
        }
    }
    if (c > 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
