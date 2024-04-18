#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, i,j;
    scanf("%d", &n);
    int x[n], y[n];
    int c = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (x[i] == y[j])
        {
            c++;
        }

        }
        
    }

    printf("%d", c);

    return 0;
}
