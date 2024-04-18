#include <bits/stdc++.h>
using ll=long long;
using namespace std;
int main(int argc, char const *argv[])
{
        ll a,b;
        cin >> a>>b;
        ll w=min(a,b);
        ll x=tgamma(w+1);
        cout<<x<<endl;

    return 0;
}
