#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int median_index = ceil(double(n) / 2) -1;
        int median = a[median_index];
        int c = 0;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] == median) {
                c++;
            }
        }
        if (n == 1) 
        {
            cout << 1 << endl;
        }
         else if (n == c && n>2)
         {
            cout << c - 1 << endl;
        }
         else if (n % 2 != 0 ) 
         {
            cout << c - 1 << endl;
        } 
        else if (n % 2 == 0 )
         {
            cout << c << endl;
        }
    }
    return 0;
}
