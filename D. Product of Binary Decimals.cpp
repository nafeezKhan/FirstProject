#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a number is a binary decimal
bool isBinaryDecimal(int n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0 && digit != 1)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

// Function to check if it is possible to represent n as a product of binary decimals
bool canRepresentAsProduct(int n)
{
    if (n == 1)
        return true;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0 && isBinaryDecimal(i) && isBinaryDecimal(n / i))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (canRepresentAsProduct(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
