#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
   long long  int n, x;
    cin >> n >> x;
   long long int IceCreamLeft = x;
    int distressed = 0;
    for (int i = 1; i <= n; i++)
    {
        char PlusMinus;
        int ice;
        cin>>PlusMinus>>ice;
        if (PlusMinus == '+')
        {
            IceCreamLeft+=ice;
        }
        else
        {
            if (IceCreamLeft>=ice)
            {
                IceCreamLeft-=ice;
            }
            else
            {
                distressed++;
            }
            
            
        }
      
        
    }
      cout<<IceCreamLeft<<" "<<distressed<<endl;

    return 0;
}
