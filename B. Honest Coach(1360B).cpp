#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s, s + n);
        int MinDiff = s[1] - s[0];

        for (i = 1; i < n - 1; i++)
        {
            int Diff =s[i+1]-s[i];
            if (MinDiff>Diff)
            {
               MinDiff=Diff;
            }
            
        }
        cout<<MinDiff<<endl;
    }

    return 0;
}
