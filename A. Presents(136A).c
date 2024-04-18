#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, x, i;
    scanf("%d", &n);
    int a[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        a[x] = i;
    }
    for (i = 1; i <= n; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}
