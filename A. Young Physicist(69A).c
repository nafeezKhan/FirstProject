#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int a[n][3];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate the sum of force vectors
    int sum_x = 0, sum_y = 0, sum_z = 0;

    for (i = 0; i < n; i++)
    {
        sum_x =sum_x + a[i][0];
        sum_y =sum_y+ a[i][1];
        sum_z =sum_z+ a[i][2];
    }

    // Check if the sum of force vectors is zero
    if (sum_x == 0 && sum_y == 0 && sum_z == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
