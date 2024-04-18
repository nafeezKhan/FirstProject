#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s = "";
    if (t == 10 && n < 2)
    {
        cout << "-1" << endl;
    }
    else if (t == 10 && n >= 2)
    {
        for (int i = 0; i < n - 1; i++)
        {
            s += '1'; //When you execute s += '1', it adds the character '1' to the end of the string s.
        }
        s += '0'; // When you execute s += '0', it adds the character '0' to the end of the string s.
        cout << s << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            s += ('0' + t); // s += ('0' + t): Converts the integer value t to its corresponding character representation and appends it to the string s
        }
        cout << s << endl;
    }
    return 0;
}
