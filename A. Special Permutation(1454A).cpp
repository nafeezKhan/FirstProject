#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = n-1; i >= 0; i--)
        {
            cin>>a[i];
        }
        for (int i = 0; i <n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        
    }
    
    return 0;
}
