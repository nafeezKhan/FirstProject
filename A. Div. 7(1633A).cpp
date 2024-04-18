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
        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            int x=n%10;
            n=n-x;
             for (int i = 1; i <=9; i++)
             {
                if ((n+i)%7==0)
                {
                    cout<<n+i<<endl;
                    break;
                }
                
             }
                       
        }
    }

    return 0;
}
