#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int aE=a-1;
        int bE=abs(b-c)+(c-1);
        if (aE<bE)
        {
            cout<< 1<< endl;
        }
        else if (aE==bE)
        {
            cout<<3<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
        
        
        
    }
    
    return 0;
}
