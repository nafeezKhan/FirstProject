#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    int c1 = 0, c2 = 0, c3 = 0;
    int x[n], y[n], z[n];
 
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
 
        if (a[i] == 1)
        {
            x[c1] = i;
            c1++;
        }
        else if (a[i] == 2)
        {
            y[c2] = i;
            c2++;
        }
        else
        {
            z[c3] = i;
            c3++;
        }
    }
 
    int minteams = c1;
    if (c2 < minteams)
    {
        minteams = c2;
    }
    if (c3 < minteams)
    {
        minteams = c3;
    }
 
    printf("%d\n", minteams);
 
    for (i = 0; i < minteams; i++)
    {
        printf("%d %d %d\n", x[i], y[i], z[i]);
    }
 
    return 0;
}