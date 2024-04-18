#include <stdio.h>
#include <math.h>
int main()
{
    long long int n, m, a, total;
    double x, y;

    scanf("%lld", &n);
    scanf("%lld", &m);
    scanf("%lld", &a);
    x = ceil((double)n / (double)a);
    y = ceil((double)m / (double)a);
    total = x * y;
    printf("%lld", total);

    return 0;
}
