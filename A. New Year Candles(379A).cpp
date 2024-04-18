#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    int sum = a;
    int x;
    while (a>=b)
    {
       x=a/b;
       sum=sum+x;
       a=x+a%b;
    }

    cout << sum << endl;

    return 0;
}
