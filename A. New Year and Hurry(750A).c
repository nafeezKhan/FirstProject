#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, k;
    scanf("%d %d", &n, &k);
    int x = 0, i = 0;
    int c, y;
    for (i = 1; i <= n; i++)
    {
        x = x + 5 * i;
        y = x + k;
        c = i;
        if (y > 240)
        {
            break;
        }
    }
    c = i - 1;
    printf("%d", c);

    return 0;
}
