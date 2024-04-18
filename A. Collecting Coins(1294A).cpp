#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        //int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

        int sum = a + b + c + n;
        int k=sum/3;
        if (sum % 3 != 0)
        {
            cout << "NO" << endl;
        }
       
        
        else
        {
           if (a>k ||b>k ||c>k)
           {
              cout << "NO" << endl;
           }
           else
           {
              cout << "YES" << endl;
           }
           
           
        }
    }

    return 0;
}
