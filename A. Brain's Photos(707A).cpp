#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    char s[n][m];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> s[i][j];
            if (s[i][j] == 'C' || s[i][j] == 'M' || s[i][j] == 'Y')
           {
             cout << "#Color" << endl;
             return 0;
        
           }
           
        }
    }
       cout << "#Black&White" << endl;

    return 0;
}
