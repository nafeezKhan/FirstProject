#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,k;
        scanf("%d %d", &n, &k);
        int x=n-k;
        int i;
        for ( i = x; i >0; i--)
        {
            printf("%d ", i);
        }
        for ( i = x+1; i <=n; i++)
        {
            printf("%d ", i);
        }
        
        
    }
    
    return 0;
}
