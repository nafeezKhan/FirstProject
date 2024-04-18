#include <iostream>
#include <vector>
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
        vector<int> C(n);
        vector<int> O(n);
        for (int i = 0; i < n; i++)
        {
            cin >> C[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> O[i];
        }
        auto min_C=min(C.begin(),C.end());
        auto min_O=min(O.begin(),O.end());
        int a,b;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            a=C[i]-*min_C;
            b=O[i]-*min_O;
            sum=sum+max(a,b);

        }
        cout<<sum<<endl;

    }

    return 0;
}
