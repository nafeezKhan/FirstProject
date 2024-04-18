#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = ceil(double(n) / 3)+1;
        int m=n-x;
        int y;
        if (m>3)
        {
           y=x-1;
        }
        else
        {
            y=2;
        }        
        int z=n-(x+y);
        cout << y <<" "<<x<<" "<<z;
        cout<<endl;
    }

    return 0;
}
