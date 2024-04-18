#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[4], i;
        int c = 0;
        for (i = 0; i < 4; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < 3; i++)
        {
            if (a[0] < a[i + 1])
            {
                c++;
            }
        }
        printf("%d\n", c);
    }

    return 0;
}
