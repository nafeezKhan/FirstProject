#include <stdio.h>
int main()
{
    long int k, n, w;
    int i, x = 0, y;
    scanf("%d %d %d", &k, &n, &w);
    for (i = 1; i <= w; i++)
    { 
       x = x + (i * k);
       
    }
    y = x - n;
    if (x<=n)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n",y);
    }
    

    return 0;
}
