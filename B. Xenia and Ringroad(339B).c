#include <stdio.h>
int main(int argc, char const *argv[])
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);

     long long int a[m],i;
    for ( i = 0; i < m; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long int x = a[0] - 1;
    for ( i = 0; i < m - 1; i++)
    {
        if (a[i + 1] > a[i])
        {
            x =x+ a[i + 1] - a[i];
        }
        else if (a[i + 1] < a[i])
        {
            x =x+ n - (a[i] - a[i + 1]);
        }
    }

    printf("%lld", x);

    return 0;
}

