#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char ch;
        cin>>ch;
        int bkl=0;
        for (int i = 0; i < s.length() ; i++)
        {
           if (s[i]==ch)
           {
              int l=i-0;
              int r=s.length()-i-1;
              if (l%2==0 && r%2==0)
              {
                bkl=1;
              }
              
           }
           
        }
             if (bkl==1)
            {
                cout<<"YES"<<endl;
            }
            else 
            {
            cout << "NO" << endl;
            }
    }

    return 0;
}
