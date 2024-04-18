#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m,k;
        cin >> n >> m>>k;
         if (k >= n)
          {
            cout << "NO" << endl;
        } 
         else  
         {
            
            if (m == 1) 
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
