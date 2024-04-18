#include <stdio.h>
int main()
{
    long long int n, m, a, flagstone;
    float x, y;
    scanf("%lld", &n);
    scanf("%lld", &m);
    scanf("%lld", &a);
    if (n % a == 0)
    {
        x = n / a;
    }
    else
    {
        x = n / a + 1;
    }
    if (m % a == 0)
    {
        y = m / a;
    }
    else
    {
        y = m / a + 1;
    }
    flagstone = x * y;
    printf("%lld", flagstone);

    return 0;
}
