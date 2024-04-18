#include <stdio.h>

int main(int argc, char const *argv[])
{
    int s, n;
    int lost = 0;
    scanf("%d %d", &s, &n);
    int a[n][2];
    int i,j,k;
    int temp;

    // Input dragon strengths and bonuses into the array
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Bubble sort the array based on dragon strengths in ascending order
    for ( i = 0; i < n - 1; i++)
    {
        for ( j = 0; j < n - i - 1; j++)
        {
            if (a[j][0] > a[j + 1][0])
            {
                //loop is crucial in ensuring that both elements (strength and bonus) of the dragons are swapped
                for ( k = 0; k < 2; k++)
                {
                    temp = a[j][k];
                    a[j][k] = a[j + 1][k];
                    a[j + 1][k] = temp;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (s > a[i][0])
        {
            s =s+ a[i][1];
        }
        else
        {
            lost = 1;
            break;
        }
    }
    if (lost == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
