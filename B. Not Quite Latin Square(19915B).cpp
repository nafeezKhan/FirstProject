#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[3][4];
        for (int i = 0; i < 3; i++)
        {
            cin >> s[i];
        }
        int cA = 0, cB = 0, cC = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (s[i][j] == 'A')
                {
                    cA++;
                }
                else if (s[i][j] == 'B')
                {
                    cB++;
                }
                
               else if (s[i][j]=='C')
               {
                 cC++;
               }
               
            }
        }
        if (cA == 2)
        {
            cout << "A" << endl;
        }
        else if (cB == 2)
        {
            cout << "B" << endl;
        }
        else if (cC == 2)
        {
            cout << "C" << endl;
        }
    }

    return 0;
}
