#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n, x, c;
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x % 2 != 0)
        {
            c = floor(x / 2);
        }
        else if (x % 2 == 0)
        {
            c = (x / 2) - 1;
        }
        else if (x <= 2)
        {
            c = 0;
        }
        printf("%d\n", c);
    }

    return 0;
}
