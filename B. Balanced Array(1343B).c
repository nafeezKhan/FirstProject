#include <stdio.h>
int main(int argc, char const *argv[])
{
    long long int t;
    scanf("%lld", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        int i;

        if ((n/2)%2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            int j=2;
            for (i = 1; i <= n/2; i++)
            {
              printf("%d ", j);
              j=j+2;
            } 
            int x=j-2;
            j=1;
            
             for ( i =1; i <n/2; i++)
             {
                printf("%d ", j);
                j=j+2;
             }
                printf("%d ", x+(n/2-1));
                printf("\n");

             }
            
    }

    return 0;
}
