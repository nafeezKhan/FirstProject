#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[3],i;
    for ( i = 0; i < 3; i++)
    {
       scanf("%d", &a[i]);
    }
    int j,temp;
    for ( j = 0; j <2; j++)
    {
        for ( i = 0; i <2; i++)
        {
            if (a[i]>a[i+1])
            {
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
            }
            
        }
        
    }
    int x=a[1]-a[0];
    int y=a[2]-a[1];
    int d=x+y;
    printf("%d", d);
    
    
    return 0;
}
