#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        int i;

        for (i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 1; i <= n - 1; i++)
        {
            if (a[i] != a[i + 1] && a[i + 1] != a[i + 2])
            {
                printf("%d\n", i + 1);
                break;
            }
            else if (a[i] != a[i + 1] && a[i + 1] == a[i + 2])
            {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
