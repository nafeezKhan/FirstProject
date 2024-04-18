#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[n],i;
    int c1=0,c2=0;
    for ( i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b=a[0];
    int w=a[0];
    for ( i = 0; i <n-1; i++)
    {
        if (a[i+1]>b)
        {
            b=a[i+1];
            c1++;
        }
        if (a[i+1]<w)
        {
            w=a[i+1];
            c2++;
        }
        
    }
    int c=c1+c2;
    printf("%d", c);
    
    
    return 0;
}
