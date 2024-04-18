#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[n],i;
    for ( i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }
    int j,temp;
    for ( j = 0; j <n-1; j++)
    {
       for ( i = 0; i <n-1-j; i++)
       {
         if (a[i]>a[i+1])
         {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;

          }
       
    }

    }
    int c=0;
    for ( i = n-1; i>0; i--)
    {
        
        c=c+a[n-1]-a[i-1];

    }
    if (n==1)
        {
            printf("0\n");
        }
        else
        {
            printf("%d", c);
        }
        
    

    
    return 0;
}
