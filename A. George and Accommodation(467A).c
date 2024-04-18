#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, p, q, i, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &p, &q);
        if (p < q && (q - p) >= 2)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
