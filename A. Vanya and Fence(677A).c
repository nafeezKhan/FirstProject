#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, h, i, count = 0;
    scanf("%d %d", &n, &h);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] <= h)
        {
            count = count + 1;
        }
        else
        {
            count = count + 2;
        }
    }
    printf("%d", count);

    return 0;
}
