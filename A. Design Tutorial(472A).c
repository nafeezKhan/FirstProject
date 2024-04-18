#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int x, y, i;
    for (x = 4; x <= n; x++)
    {
        y = n - x;
        int xc = 0, yc = 0;
        for (i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                xc = 1;
                break;
            }
        }
        for (i = 2; i * i <= y; i++)
        {
            if (y % i == 0)
            {
                yc = 1;
                break;
            }
        }
        if (xc == 1 && yc == 1)
        {
            printf("%d %d\n", x, y);
            break;
        }
    }

    return 0;
}
