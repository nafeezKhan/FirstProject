#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if (n % 2!= 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i%2!=0)
            {
                cout<<i+1<<" ";
            }
            else
            {
                cout<<i-1<<" ";
            }
            
            
        }
    }

    return 0;
}
