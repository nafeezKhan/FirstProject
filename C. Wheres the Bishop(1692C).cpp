#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
       char a[8][8];
       for (int i = 0; i <8; i++)
       {
         for (int j = 0; j <8; j++)
         {
            cin>>a[i][j];
         }
       }
       int x,y;
       for (int i = 0; i <8; i++)
       {
         for (int j = 0; j <8; j++)
         {
            if (a[i][j]=='#')
            {
                if (a[i-1][j]=='.' && a[i-1][j-1]=='#' && a[i-1][j+1]=='#' && a[i+1][j]=='.' && a[i+1][j-1]=='#'  && a[i+1][j+1]=='#' )
                {
                    x=i;
                    y=j;
                }
                
            }
            
         }         

       }
       cout<<x+1<<" "<<y+1<<endl;
       

    }
    return 0;
}
