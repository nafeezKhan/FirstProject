#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, y, i;
    double z, x = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &y);
        x = x + y;
    }
    z = x / n;
    printf("%lf", z);

    return 0;
}
