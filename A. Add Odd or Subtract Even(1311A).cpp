#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        // int c=0;
        if (a > b)
        {
            if (a % 2 != 0 && b % 2 != 0)
            {
                cout << 1 << endl;
            }
            else if (a % 2 != 0 && b % 2 == 0)
            {
                cout << 2 << endl;
            }
            else if (a % 2 == 0 && b % 2 != 0)
            {
                cout << 2 << endl;
            }
            else if (a % 2 == 0 && b % 2 == 0)
            {
                cout << 1 << endl;
            }

        }
        if (a < b)
        {
             if (a % 2 == 0 && b % 2 != 0)
            {
                cout << 1 << endl;
            }
            else if (a % 2 == 0 && b % 2 == 0)
            {
                cout << 2 << endl;
            }
            else if (a % 2 != 0 && b % 2 != 0)
            {
                 cout << 2 << endl;
            }
            else if (a % 2 != 0 && b % 2 == 0)
            {
                cout << 1 << endl;
            }
            
            
            
        }
        if (a==b)
        {
            cout << 0 << endl;
        }
        
    }

    return 0;
}
