#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[2*n];
        for (int i = 0; i <2*n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i <2*n; i++)
        {
            for (int j = i+1; j < 2*n; j++)
            {
                if (a[i]==a[j])
                {
                    cout<<a[i]<<" ";
                    break;
                }
                
            }
            
        }
        cout<<endl;
        
        
    }

    return 0;
}
