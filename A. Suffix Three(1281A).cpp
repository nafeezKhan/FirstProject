#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.substr(s.length() - 2, 2) == "po")
        {
            cout << "FILIPINO" << endl;
        }
        else if (s.substr(s.length() - 4, 4) == "desu" || s.substr(s.length() - 4, 4) == "masu")
        {
            cout << "JAPANESE" << endl;
        }
        else
        {
            cout << "KOREAN" << endl;
        }
    }
 
    return 0;
}