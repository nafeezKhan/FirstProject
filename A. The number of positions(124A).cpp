#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int result_1, result_2, result;
    int result_3 = a + b + 2;
 
    result_1 = n - a;
    if (result_1 <= b)
    {
        result_2 = result_1;
    }else
    {
        result_2 = b;
    }
    result = (result_1 + result_2 + 1) / 2;
 
    if (result_3 < n)
    {
        result = b + 1;
    }
    cout << result << endl;
 
 
    return 0;
}