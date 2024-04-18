#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int c=0;
    for (int i = 1; i <= n; i++)
    {
        int x=n-i;
        if (x>=i && x%i==0)
        {
            c++;
        }
        
    }
    cout<<c<<endl;
    
    return 0;
}
