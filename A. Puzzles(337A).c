#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    int i, j;
    int a[m];
    int temp;
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < m - 1; j++)
    {
        for (i = 0; i < m - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    int x=a[n-1]-a[0];
    for ( i = 1; i <=m-n; i++)
    {
        if (a[i+n-1]-a[i]<x)
        {
            x=a[i+n-1]-a[i];
        }
        
    }
        printf("%d", x);

    return 0;
}
