#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n++;

    while (true)
    {
        string s =to_string(n);
        set<char> distinctDigits(s.begin(), s.end());

        if (distinctDigits.size() == s.size())
        {
            cout << n << endl;
            break;
        }
        n++;
    }

    return 0;
}
//why giving compilation error?