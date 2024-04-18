#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x = 0, y = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            y = y + a[i];
        }
        else if (a[i] < 0)
        {
            if (y > 0)
            {
                y--;
            }
            else
            {
                x++;
            }
        }
    }
    printf("%d", x);

    return 0;
}
