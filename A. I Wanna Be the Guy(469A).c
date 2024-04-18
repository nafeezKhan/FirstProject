#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,p,q,i,j,temp, count=0;
    scanf("%d", &n);
    scanf("%d", &p);
    int a[500];
    for ( i = 0; i <p; i++)
    {
       scanf("%d", &a[i]);
    }
    scanf("%d", &q);
    for ( i = p; i <p+q; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( j = 0; j<(p+q)-1; j++)
    {
        for ( i = 0; i <(p+q)-1; i++)
        {
            if (a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            
        }
        
    }
    for ( i = 0; i <(p+q); i++)
    {
        if (a[i]!=a[i+1])
        {
            count++;
        }
        
    }
    if (count==n)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }
      return 0;
}
