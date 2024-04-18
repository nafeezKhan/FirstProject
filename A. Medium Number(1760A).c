#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[3], i, j, temp;
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &a[i]);
        }
        for (j = 0; j < 2; j++)
        {
            for (i = 0; i < 2 - j; i++)
            {
                if (a[i] > a[i + 1])
                {
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
        }
        printf("%d\n", a[1]);
    }

    return 0;
}
